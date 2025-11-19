#include<stdio.h>
int main(){
int n=5;
int factorial=1;
for(int i=1;i<=5;i++){
    factorial = factorial*i;
}
printf("factorial %d",&factorial);
}
