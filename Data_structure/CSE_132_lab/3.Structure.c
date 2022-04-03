#include<stdio.h>
#include<string.h>

struct studenttype
{
    char name[20];
    char gender[10];
    int id;

};

int main()
{
    struct studenttype arr[10];

    int i,n=5;

    for(i=0; i<n; i++)
    {
        printf("Enter ID for student %d: ", i+1);
        scanf("%d", &arr[i].id);
        printf("Enter name for student %d:", i+1);
        scanf("%s", arr[i].name);
        printf("Enter gender of the student %d:(Male or female)", i+1);
        scanf("%s", arr[i].gender);
    }

    printf("Student Records: \n\n");

     for (i = 0; i < n; i++)
    {
        printf("Id = %d, Name = %s, gender = %s \n", arr[i].id, arr[i].name, arr[i].gender);
    }

    return 0;
}
