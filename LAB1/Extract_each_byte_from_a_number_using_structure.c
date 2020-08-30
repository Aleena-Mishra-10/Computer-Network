#include<stdio.h>
#include<stdlib.h>
struct pkt{
    unsigned char ch1;
    unsigned char ch2[2];
    unsigned char ch3;
};

int main(){
    //unsigned int n;
    struct pkt p;
    unsigned int n;
    printf("enter the hexadecimal no.\n");
    scanf("%x",&n);
    p.ch1=(n&0xFF);
    p.ch2[0]=((n>>8)&0xFF);
    p.ch2[1]=((n>>16)&0xFF);
    p.ch3=((n>>24)&0xFF);
    printf("ch1=%02X\n",p.ch1);
    printf("ch2[0]=%02X\n",p.ch2[0]);
    printf("ch2[1]=%02X\n",p.ch2[1]);
    printf("ch3=%02X\n",p.ch3);
    //printf("%x%x%x%x",(int)p.ch3*pow(256,3)+(int)p.ch2[1]*pow(256,2)+(int)p.ch2[0]*pow(256,1)+(int)p.ch1*pow(256,0));
    printf("%x%x%x%x",p.ch3,p.ch2[1],p.ch2[0],p.ch1);
    return 0;
}