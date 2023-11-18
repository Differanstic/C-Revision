#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int age;
    int grNo;
};

void main()
{
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    if (students != NULL)
    {

        for (int i = 0; i < numStudents; ++i)
        {
            printf("Enter details for student %d:\n", i + 1);

            printf("Name: ");
            scanf("%s", students[i].name);
            fflush(stdin);

            printf("Age: ");
            scanf("%d", &students[i].age);

            printf("Gr No: ");
            scanf("%d", &students[i].grNo);
        }

        printf("\nDetails of the students:\n");
        for (int i = 0; i < numStudents; ++i)
        {
            printf("Student %d:\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Grade: %d\n", students[i].grNo);
            printf("\n");
        }
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    free(students);
}
