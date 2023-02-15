#ifndef SOCKETS
#define SOCKETS
/*Includes*/
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
/*Macros*/
#define PORT 3000
#define BUFSIZE 4096
#define INIT_SERVER(server) do {					\
		bzero((char *)&server, sizeof(server));			\
		client_addrlen = sizeof(client);			\
		server.sin_family = AF_INET;				\
		server.sin_port = htons(PORT);				\
		server.sin_addr.s_addr = INADDR_ANY;			\
	} while (0)

#define WRITE_DATA							\
	do {								\
		reqcount++;						\
		printf("Connection Received: [%s:%u]\n", inet_ntoa(client.sin_addr), ntohs(client.sin_port)); \
		printf("Incoming Request:\n%s\n", buffer);		\
	} while (0);

/*Declarations*/
void create_socket(int *sock_num);
void bind_socket(int sock_id, struct sockaddr_in server);
int engage_socket(int sock_id);
void read_socket(int client_sockfd, char buffer[]);
void write_socket(int reqcount, int client_sockfd, char *response);
/* sprintf(response + strlen(response),
   "Access-Control-Allow-Origin: http://s3kshun-8.me\r\n\r\n"); */
#endif
