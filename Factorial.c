#include<stdio.h>
int factorial(int n){
    if (n==0){
    return 1;
}
return n*(n-1);
}
int main(){
    int num;
    printf("enter the number ");
    scanf("%d\n",num);
    printf("factorial:%d\n",factorial(num));
    
}
