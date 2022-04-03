/*
write a program that print an integer,floating,
double number and character
*/
#include<stdio.h>
int main()
{
   int num1=20,num2=30;
   float num3= 10.5;
   double num4= 10.12121212;
   char ch= 'a';

   printf("Number are is %d,%d\n",num1,num2);
   printf("num3 = %.2f\n",num3);
   printf("num4 = %lf\n",num4);
   printf("ch= %c\n",ch);

   return 0;
}
