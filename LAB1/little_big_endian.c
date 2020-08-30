#include<stdio.h>
typedef unsigned char BYTE;
int main(){
    //checking of endianness
    unsigned int n;
    printf("enter a hexadecimal number");
    scanf("%d",&n);
    char *k = (char *)&n;
    
    printf ("*k is: 0x%x\n", *k);
    if(*k==0x10){
         printf ("Underlying architecture is little endian. \n");
    } 
    else{
         printf ("Underlying architecture is big endian. \n");
    } 
    BYTE a,b,c,d;
    a=(n&0xFF);
    b=((n>>8)&0xFF);
    c=((n>>16)&0xFF);
    d=((n>>24)&0xFF);
    printf("a= %02X\n",a);
    printf("b= %02X\n",b);
    printf("c= %02X\n",c);
    printf("d= %02X\n",d);
    printf("in bigendian the number is\n");
    printf("%x%x%x%x0x\n",a,b,c,d);
    printf("in little endian number is\n");
    printf("0x%x%x%x%x\n",d,c,b,a);
    return 0; 
}