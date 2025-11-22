#include<stdio.h>
enum level{
    Low=7,
    Medium=5,
    High=9,
};
int main(){
    enum level l=High;
    printf("%d\n",l);
}
