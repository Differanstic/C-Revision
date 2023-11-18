#include <stdio.h>
#include <stdlib.h>

void main()
{

    printf("Dyanmic Array Sum\n\n");

    int *dynamicArray = (int*)malloc(sizeof(int));
    int value, sum = 0;
    int size = 0;

    do
    {
        printf("Enter a value (-1 to stop): ");
        scanf("%d", &value);

        if (value != -1)
        {
            size++;

            dynamicArray = (int *)realloc(dynamicArray, size * sizeof(int));
            if (dynamicArray != NULL)
            {
                dynamicArray[size - 1] = value;
                sum += value;
            }
            else
            {
                printf("Memory allocation failed.\n");
            }
        }
    } while (value != -1);

    printf("Array elements: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    printf("Sum of elements: %d\n", sum);

    free(dynamicArray);

}
