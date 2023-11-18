#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Dyanmic Arrays using Malloc and Calloc\n\n");

    int x;

    printf("Enter the length of the array: ");
    scanf("%d", &x);

    // Using malloc
    int *dynamicArrayMalloc = (int *)malloc(x * sizeof(int));

    if (dynamicArrayMalloc != NULL)
    {

        printf("Enter %d integers for the array using malloc:\n", x);
        for (int i = 0; i < x; ++i)
        {
            scanf("%d", &dynamicArrayMalloc[i]);
        }

        printf("Array elements using malloc: ");
        for (int i = 0; i < x; ++i)
        {
            printf("%d ", dynamicArrayMalloc[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Memory allocation using malloc failed.\n");
    }

    free(dynamicArrayMalloc);


    // Using CALLOC
    int *dynamicArrayCalloc = (int *)calloc(x, sizeof(int));

    if (dynamicArrayCalloc == NULL)
    {
        printf("Memory allocation using calloc failed.\n");
    }
    else
    {

        printf("Enter %d integers for the array using calloc:\n", x);
        for (int i = 0; i < x; ++i)
        {
            scanf("%d", &dynamicArrayCalloc[i]);
        }

        printf("Array elements using calloc: ");
        for (int i = 0; i < x; ++i)
        {
            printf("%d ", dynamicArrayCalloc[i]);
        }
        

        free(dynamicArrayCalloc);
    }
}
