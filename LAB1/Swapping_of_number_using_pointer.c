#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a , b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Value before swapping is:\t%d\t%d\n",a,b);
    swap(&a,&b);
    printf("Value after swapping is:\t%d\t%d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //printf("Value after swapping is:%d\t%d",a,b);
}