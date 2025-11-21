#include<stdio.h>
struct student{
    int roll;
    char name[20];
};
   int main(){
    struct student s[2];
    printf("enter roll num and name\n");
    scanf("%d %s",&s[0].roll,s[0].name);
    printf("enter roll num and name\n");
    scanf("%d %s",&s[1].roll,&s[0].name);
}
