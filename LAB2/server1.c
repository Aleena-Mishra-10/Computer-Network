#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
int main()
{
int ss,sb;
ss=socket(AF_INET,SOCK_DGRAM,0);
struct sockaddr_in serveraddr;
serveraddr.sin_family=AF_INET;
serveraddr.sin_port=ntohs(6011);

serveraddr.sin_addr.s_addr=inet_addr("127.0.0.1");
sb=bind(ss,(struct sockaddr *)&serveraddr,sizeof(struct sockaddr));
char msg[]="Thank You",msg1[100];

struct sockaddr_in client;
client.sin_family=AF_INET;
client.sin_port=ntohs(6009);

client.sin_addr.s_addr=inet_addr("127.0.0.1");
sendto(ss,msg,sizeof(msg),0,(struct sockaddr *)&client,sizeof(struct sockaddr));
close(ss);
}
