//UDP SERVER
#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
#include<sys/socket.h>

int main() {

    int sockfd, len, n;
    char buffer[100];
    struct sockaddr_in server, client;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = INADDR_ANY;
    bind(sockfd, (struct sockaddr*)&server, sizeof(server));
    len = sizeof(client);
    n = recvfrom(sockfd, buffer, 100, 0,
    (struct sockaddr*)&client, &len);
    buffer[n] = '\0';
    printf("Client : %s\n", buffer);
    sendto(sockfd, "Hello from server", 17, 0, (struct sockaddr*)&client, len);
    printf("Hello message sent.\n");
    
    return 0;
}
