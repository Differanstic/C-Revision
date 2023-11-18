#include <stdio.h>
void main() {

    printf("Swapping Using Pointers\n\n");

    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    int *a = &num1;
    int *b = &num2;

    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

}
