#include<stdio.h>

struct person
{
    char name[100];
    int age;
    float salary;

};

int main()
{
    struct person person[4];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter the information for person %d \n",i+1);
        printf("Enter the name : ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter salary : ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<3; i++)
    {
        printf("\n\nInformation for person %d \n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %.2f\n",person[i].salary);
    }
    getch();
}

