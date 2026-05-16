//UDP CLIENT
#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
#include<sys/socket.h>

int main() {

    int sockfd, n, len;
    char buffer[100];

    struct sockaddr_in server;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    // localhost address
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    sendto(sockfd, "Hello from client", 17, 0,
    (struct sockaddr*)&server, sizeof(server));
    printf("Hello message sent.\n");
    len = sizeof(server);
    n = recvfrom(sockfd, buffer, 100, 0, (struct sockaddr*)&server, &len);
    buffer[n] = '\0';
    printf("Server : %s\n", buffer);

    return 0;
}