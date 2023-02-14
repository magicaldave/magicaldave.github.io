#include "sockets.h"
void create_socket(int *sock_num)
{
	const int enable = 1;

	*sock_num = socket(AF_INET, SOCK_STREAM, 0);
	if (*sock_num < 0) {
		perror("ERROR opening socket");
		exit(1);
	}
	/* The socket should be reusable. Nobody else uses port 3000! */
	if (setsockopt(*sock_num, SOL_SOCKET, SO_REUSEADDR, &enable, sizeof(int)) < 0)
		perror("setsockopt(SO_REUSEADDR) failed");
}

void bind_socket(int sock_id, struct sockaddr_in server)
{
        if (bind(sock_id, (struct sockaddr *)&server, sizeof(server)) != 0)
	{
                perror("ERROR on binding");
                exit(1);
        }
        printf("Webserver bound to port %d\n", PORT);
}

int engage_socket(int sock_id)
{
	/* Engage the socket with a max of five connections */
        if (listen(sock_id, 5) != 0) {
                perror("Listen failed");
                return (1);
        }
        printf("Listening on port %d\n", PORT);
	return 0;
}

void write_socket(int reqcount, int client_sockfd, char *response)
{
	int n;

        printf("Request #%d, Outgoing Data:\n\n%s", reqcount, response);
        n = write(client_sockfd, response, strlen(response));
	if (n < 0)
	{
		perror("ERROR writing to socket");
		exit(1);
	}
	close(client_sockfd);
}

void read_socket(int client_sockfd, char buffer[])
{
	int n;

	bzero(buffer, BUFSIZE);
        n = read(client_sockfd, buffer, BUFSIZE - 1);
        if (n < 0) {
                perror("ERROR reading from socket");
                exit(1);
        }
}
