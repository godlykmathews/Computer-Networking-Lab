//TCP SERVER
#include<stdio.h>
#include<string.h>
#include<arpa/inet.h>
#include<unistd.h>
#define PORT 8080
int main()
{
int server_fd,new_socket;
struct sockaddr_in address;
char buffer[1024]={0};
char *msg="Hello from server";
server_fd=socket(AF_INET,SOCK_STREAM,0);
address.sin_family=AF_INET;
address.sin_addr.s_addr=INADDR_ANY;
address.sin_port=htons(PORT);
bind(server_fd,(struct sockaddr*)&address,sizeof(address));
listen(server_fd,3);
new_socket=accept(server_fd,NULL,NULL);
read(new_socket,buffer,1024);
printf("%s\n",buffer);
send(new_socket,msg,strlen(msg),0);
close(server_fd);
}