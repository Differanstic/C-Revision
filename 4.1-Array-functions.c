#include <stdio.h>

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int Min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double arrayAverage(int arr[], int size) {
    int sum = arraySum(arr, size);
    return (double)sum / size;
}

int main() {
    printf("Array Functions\n\n");

    int arr[10],size = 10;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Sum: %d\n", arraySum(arr, size));
    printf("Max: %d\n", Max(arr, size));
    printf("Min: %d\n", Min(arr, size));
    printf("Average: %.2f\n", arrayAverage(arr, size));

    return 0;
}
