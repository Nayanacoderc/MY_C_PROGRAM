#include<stdio.h>
union nayana{
    int age;
    float marks;
};
int main(){
    union nayana n;
     n.age=10;
    printf("%d\n",n.age);
     n.marks=20;
    printf("%d\n",n.marks);
}
