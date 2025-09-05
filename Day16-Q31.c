//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int binary=0, place=1;
    int original=n;
    if (n==0) {
        printf("0");
    } if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        int remainder = n % 2;
        binary = binary + (remainder * place);
        place *= 10;
        n = n / 2;
    }
    printf("%d",binary);
    return 0;
}