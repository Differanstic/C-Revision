#include <stdio.h>

void main() {

    printf("Marks-Percentage-Calculator\n\n");

    float math, sci, phy, percentage;
    
    printf("Enter marks for math: ");
    scanf("%f", &math);

    printf("Enter marks for sci: ");
    scanf("%f", &sci);

    printf("Enter marks for phy: ");
    scanf("%f", &phy);

    percentage = (math + sci + phy) / 3;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 90) {
        printf("Grade: A\n");
    } else if (percentage > 80) {
        printf("Grade: B\n");
    } else if (percentage > 70) {
        printf("Grade: C\n");
    }

    
}
