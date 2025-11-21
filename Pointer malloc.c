#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p=(int*)malloc(5*sizeof (int));
    *p=10;
    printf("value=10\n",p);
}
