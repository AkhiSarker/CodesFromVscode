//C/5=(F-32)/9=(k-273)/5
// F=(1.8*C)+32
//C=(F-32)/1.8
#include<stdio.h>
int main()
{
   float C,F;
   printf("Enter centigrade:");
   scanf("%f",&C);

   F=(1.8*C)+32;
   printf("Fahrenheit:%.2f\n",F);

   getch();
}
