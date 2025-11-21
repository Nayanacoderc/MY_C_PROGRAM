#include <stdio.h>
struct Student {
    int roll;
    char name;
};
int main() {
    struct Student s;
    s.roll = 1;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("\nRoll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
}
