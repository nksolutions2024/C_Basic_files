#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    float cgpa;
} person[20];

void insert()
{
    FILE *fptr;
    // student one
    fptr = fopen("records/list.txt", "a");

    strcpy(person[0].name, "cat");
    person[0].roll = 433;
    person[0].cgpa = 8;
    fprintf(fptr, "%s ", person[0].name);
    fprintf(fptr, "%d ", person[0].roll);
    fprintf(fptr, "%.2f \n", person[0].cgpa);

    fclose(fptr);
    // student two
    fptr = fopen("records/list.txt", "a");

    strcpy(person[1].name, "deer");
    person[1].roll = 56;
    person[1].cgpa = 5;
    fprintf(fptr, "%s ", person[1].name);
    fprintf(fptr, "%d ", person[1].roll);
    fprintf(fptr, "%.2f \n", person[1].cgpa);

    fclose(fptr);
}

void search(int number)
{
    int i = number;
    printf("%s ", person[i].name);
    printf("%d ", person[i].roll);
    printf("%.2f \n", person[i].cgpa);
}

void display()
{
    for (int i = 0; i <= 1; i++)
    {
        printf("%s ", person[i].name);
        printf("%d ", person[i].roll);
        printf("%.2f \n", person[i].cgpa);
    }
}

void update(int number){
    int i=number;
    FILE *fptr;
    fptr = fopen("records/list.txt", "a");

    printf("Enter NAME: ");
    scanf("%s", person[i].name);
    printf("enter roll number ");
    scanf("%d",&person[i].roll);
    printf("enter CGPA ");
    scanf("%f",&person[i].cgpa);

    fprintf(fptr, "%s ", person[i].name);
    fprintf(fptr, "%d ", person[i].roll);
    fprintf(fptr, "%.2f \n", person[i].cgpa);

    fclose(fptr);
}
int main()
{
    insert();
    // search(1);
    // display();
    update(1);

    return 0;
}
