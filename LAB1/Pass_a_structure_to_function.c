#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct info{
    int rollno;
    char name[50];
    float cgpa;
};
void func(struct info i);
int main(){
        struct info i;
        i.rollno = 1;
        strcpy(i.name,"Aleena");
        i.cgpa = 9.4;
        func(i);
    return 0;
}
void func(struct info i){
      printf("Roll no:%d\n",i.rollno);
      printf("Name:%s\n",i.name);
      printf("CGPA:%f\n",i.cgpa);
}