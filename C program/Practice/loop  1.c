#include<stdio.h>
int main()
{
   int a= 2;
   while(a<20)
   {
       printf("value of a:%d\n",a);
       a+=2;
       if(a>16)
        break;
   }

    return 0;
}
