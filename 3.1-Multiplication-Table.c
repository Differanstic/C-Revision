#include <stdio.h>

void main() {

    printf("Multiplication Table\n\n");

    int x;

    printf("Enter a x: ");
    scanf("%d", &x);

    printf("Multiplication Table of %d:\n", x);

    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

}
