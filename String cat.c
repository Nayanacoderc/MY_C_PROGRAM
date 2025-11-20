#include<stdio.h>
#include<string.h>
int main(){
    char rose[10];
    printf("enter your string");
    scanf("%s",&rose);
    printf("before%s",rose);
    strcat(rose,"rose");
    printf("after%s",rose);
}
