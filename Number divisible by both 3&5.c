#include<stdio.h>
int main(){
int num;
printf("enter the number ");
scanf("%d\n",&num);
if (num % 3==0 && num %5==0){
    printf("%d is both divisible by both 3 & 5\n",num );
}
else {
    printf("%d is not divisible by both 3 & 5\n",num);
}
}
