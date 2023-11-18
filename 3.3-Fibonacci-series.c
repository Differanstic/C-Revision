#include <stdio.h>

void main() {

    printf("Fibonacci Series\n\n");

    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int a = 0, b = 1, nextTerm;

    printf("%d, %d, ", a, b);
    nextTerm = a + b;

    while (nextTerm <= N) {
        printf("%d", nextTerm);

        // for displaying better
        if (nextTerm + b <= N) {
            printf(", ");
        }
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

}
