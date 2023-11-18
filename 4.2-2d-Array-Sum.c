#include <stdio.h>

const int ROWS = 3;
const int COLS = 3;



// function to show array in matrix form
void displayArray(int arr[3][3]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {

    printf("2d Array Sum \n\n");

    int array1[3][3], array2[3][3], sumArray[3][3];

    // first Array
    printf("Enter elements for the first array (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    // second Array
    printf("Enter elements for the second array (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    // adding Arrays
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sumArray[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // showing Arrays
    printf("\nFirst Array:\n");
    displayArray(array1);

    printf("\nSecond Array:\n");
    displayArray(array2);

    printf("\nSum of Arrays:\n");
    displayArray(sumArray);
}
