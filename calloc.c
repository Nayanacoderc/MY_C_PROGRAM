#include<stdio.h>
#include<stdlib.h>
int main(){
    int*arr;
    int n=5;
    arr=(int*)calloc(5,sizeof(int));
    printf("array values after calloc\n");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}
