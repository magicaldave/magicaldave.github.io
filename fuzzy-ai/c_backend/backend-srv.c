#include "sockets.h"
#include <string.h>
int extract_hostname(char *buffer)
{
	char *host_prefix = (strstr(buffer, "\r\nHost: ") + 8);
	char *host = NULL, *auth = NULL, *accepted = "localhost";
	int index;

	for (index = 0; host_prefix[index] != 58; index++)
		;

	host_prefix[index] = '\0';
        host = host_prefix;
	/* This needs some safety features? */
	auth = strcmp(host, accepted) == 0 ? "Authorized" : "Unauthorized";

        printf("Grabbed hostname: %s : %s\n\n", host, auth);

        return strcmp(host, accepted) == 0
		? 1
		: 0;
}
char *grab_endpoint(char buffer[])
{
	int index;
	char endpoint[128];
	char *endpoints[3] = {
		"/generate-text",
		"/generate-sound",
		"/generate-img",
	};

	for (index = 0; buffer[index] && buffer[index] != 32; ++index);

	bzero(endpoint, 128);
	strncpy(endpoint, buffer, index);

	printf("Endpoint requested: %s\n\n", endpoint);

	for (index = 0; index <= 2; index++)
		if (!strncmp(endpoint, endpoints[index], strlen(endpoints[index])))
			return (endpoints[index]);
        return (NULL);
}
int main(void)
{
	int sockn, newsock, client_sockfd, client_addrlen, reqcount = 0, authenticated = 0;
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
		/*
		 * In order: checks for valid source of traffic,
		 * valid request type, and valid endpoint
		 */
		authenticated = (extract_hostname(buffer) && !strncmp(buffer, "GET ", 4) && grab_endpoint(buffer + 4));
		printf("Traffic originating from valid source: %s\n", authenticated ? "True" : "False");

		write_socket(reqcount, client_sockfd, authenticated
			     ? response
			     : denial);
        }
	printf("Webserver closing.\n");
	return (0);
}


