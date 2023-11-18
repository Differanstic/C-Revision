#include <stdio.h>


void concatenateStrings(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

void main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

}
