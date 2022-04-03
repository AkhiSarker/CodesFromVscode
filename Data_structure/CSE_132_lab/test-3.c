#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    char gender[10];
    int id;

};

int comparator(const void* p, const void* q)
{
    return strcmp(((struct Student*)p)->name,((struct Student*)q)->name);
}

int main()
{
    int i = 0, n = 5;

    struct Student arr[n];

    for(i=0; i<n; i++)
    {
        printf("Enter ID for student %d: ", i+1);
        scanf("%d", &arr[i].id);
        printf("Enter name for student %d:", i+1);
        scanf("%s", arr[i].name);
        printf("Enter gender of the student %d:(Male or female)", i+1);
        scanf("%s", arr[i].gender);
    }

    printf("Student Records:\n");
    for (i = 0; i < n; i++)
    {
        printf("Id = %d, Name = %s, gender = %s \n", arr[i].id, arr[i].name, arr[i].gender);
    }

    qsort(arr, n, sizeof(struct Student), comparator);

    printf("\n\nStudent Records sorted by Name:\n");
    for (i = 0; i < n; i++)
    {
        printf("Id = %d, Name = %s, gender = %s \n", arr[i].id, arr[i].name, arr[i].gender);
    }

    return 0;
}

