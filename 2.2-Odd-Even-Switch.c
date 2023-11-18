#include <stdio.h>

void main() {
    int number;

    printf("Odd Even Using Swtich Statement\n\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            printf("%d is an even number.\n", number);
            break;

        case 1:
            printf("%d is an odd number.\n", number);
            break;
        default:
            printf("Invalid input.\n");
    }

}
