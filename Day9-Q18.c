//Q18: Write a program to assign grades based on a percentage input.



#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if (marks > 90) {
        printf("A\n");
    } else if (marks > 80 ) {
        printf("B\n");
    } else if (marks > 70 ) {
        printf("C\n");
    } else if (marks > 60 ) {
        printf("D\n");
    } else if (marks > 50 ) {
        printf("E\n");
    } else {
        printf("F\n");
    }
    return 0;
}
