#include<stdio.h>
int main()
{
    char name [100];//string
    int roll;
    float sub1,sub2,sub3,score;

    printf("Enter Name : ");
    scanf("%[^\n]",name);

    printf("Enter the Roll : ");
    scanf("%d",&roll);

    printf("Enter 3 subjects marks : ");
    scanf("%f %f %f",&sub1,&sub2,&sub3);

    score = sub1+sub2+sub3/3 ;

    printf("\n Name of student : %s\n ",name );
    printf("\n Roll Number : %d\n",roll);
    printf("\n Score : %.2f\n",score);

   getch();
}
