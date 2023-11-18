#include <stdio.h>

void main() {
    double C, x, result = 1;

    printf("Calculate Power C^x\n\n");

    printf("Enter the C: ");
    scanf("%lf", &C);

    printf("Enter the x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= x; ++i) {
        result *= C;
    }

    printf("%.2lf ^ %.2lf = %.2lf\n", C, x, result);
}
