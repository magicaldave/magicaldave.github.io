#include "sockets.h"
#include <string.h>
int grab_endpoint(char buffer[]);
int main(void)
{
	int sockn, newsock, client_sockfd, client_addrlen, reqcount = 0;
	char buffer[BUFSIZE];
        char response[BUFSIZE] = "HTTP/1.1 200 OK\r\n"
		"Server: SER-DAVE\r\n"
		"Content-type: text/plain\r\n"
		"Access-Control-Allow-Origin: http://s3kshun-8.me\r\n\r\n"
		"Holy Shit! I wrote a webserver in C!\r\n";
        struct sockaddr_in server, client;
        socklen_t clilen = sizeof(client);
	char denial[] = "HTTP/1.1 400 Bad Request\r\n";

        /* Create the Socket - http, stream data, only http */
	create_socket(&newsock);

        /*
         * Populate server data.
         * Need some more info on this one.
         * Initialize the struct with empty, then good data.
         */
        INIT_SERVER(server);

	/* Lock it */
	bind_socket(newsock, server);

	/* Engage with up to five clients */
	engage_socket(newsock);

	for (;;)
	{
		/* Accept the incoming connection */
		client_sockfd = accept(newsock, (struct sockaddr *)&server, &clilen);
		if (client_sockfd < 0)
		{
			perror("ERROR on accept");
			exit(1);
		}

		sockn = getsockname(client_sockfd, (struct sockaddr *)&client,
				    (socklen_t *)&client_addrlen);
		if (sockn < 0)
		{
			perror("Socket failed: ");
			continue;
		}

		/* Sanitize buffers & read input data */
                read_socket(client_sockfd, buffer);
                WRITE_DATA;

                if (strncmp(buffer, "GET ", 4))
			write_socket(reqcount, client_sockfd, denial);
		else
		{
                        write_socket(reqcount, client_sockfd, response);
			/* An endpoint has now been captured, make sure it's a good one */
			printf("\n\nSpace at: %d\n\n",
			       grab_endpoint(buffer + 4));
		}
        }
	printf("Webserver closing.\n");
	return (0);
}

int grab_endpoint(char buffer[])
{
	int index;
	char endpoint[128];

	for (index = 0; buffer[index] && buffer[index] != 32; ++index);
	strncpy(endpoint, buffer, index);
	printf("Endpoint requested: %s\n\n", endpoint);
        return (index);
}
