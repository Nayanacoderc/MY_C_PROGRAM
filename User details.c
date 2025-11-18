#include<stdio.h>
int User_details(){
    int age;
    char name,dept;
    printf("enter the name of a peson\n");
    scanf("%s",&name);
    printf("enter the dept of a person\n");
    scanf("%s",&dept);
    printf("enter the age of a person\n");
    scanf("%d",&age);
}
    int main() {
    User_details();
    }
