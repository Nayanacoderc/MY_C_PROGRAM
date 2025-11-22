#include<stdio.h>
enum Days{
    Monday=8,
    Wednesday=18,
    Sunday=7,
};
int main(){
    enum Days d;
    printf("enter days(8-7)");
    scanf("%d\n",&d);
    if(d=8){
        printf("Monday");}
        else if(d=18){
            printf("Wednesday ");}
            else{
                printf("Sunday ");}
}
