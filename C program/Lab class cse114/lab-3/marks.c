#include<stdio.h>
int main()
{
    char name [100],grade ;//string
    int roll;
    float sub1,sub2,sub3,sub4,sub5,avg;

    printf("Enter Name : ");
    scanf("%[^\n]",name);

    printf("Enter the Roll number : ");
    scanf("%d",&roll);

    printf("Enter marks of 5 Subjects :\n");
    printf("CSE113 : ");
    scanf("%f",&sub1);
    printf("CSE114 : ");
    scanf("%f",&sub2);
    printf("MAT101: ");
    scanf("%f",&sub3);
    printf("PHY102 : ");
    scanf("%f",&sub4);
    printf("ENG202 : ");
    scanf("%f",&sub5);

    avg = (sub1+sub2+sub3+sub4+sub5)/5 ;

    printf("\n Name of student : %s\n ",name );
    printf("\n Roll Number : %d\n",roll);
    printf("\n Average markes : %.2f\n",avg);
    printf("\n Letter Grade : ");

    if(avg>=80)
        printf("A+");

    else if(avg>=70)
        printf("A");

    else if(avg>=60)
        printf("A-");

    else if(avg>=50)
        printf("B");

    else if(avg>=40)
        printf("C");

    else if(avg>=33)
        printf("D");

    else
        printf("F \n");


    getch();
}
