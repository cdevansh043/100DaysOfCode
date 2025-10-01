//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s",str);
    int vowel = 0;
    int consonant = 0;
    for (int k = 0; k < strlen(str); k++) {
        if (str[k] == 'a' || str[k] == 'e' || str[k] == 'i' || str[k] == 'o' || str[k] == 'u' || str[k] = 'A'|| str[k] = 'E' || str[k] = 'I' || str[k] = 'O' || str[k] = 'U') {
            vowel++;
        } else {
            consonant++;
        }
    }
    printf("Vowel = %d , Consonant = %d",vowel,consonant);
    return 0;
}
