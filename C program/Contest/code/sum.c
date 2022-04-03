
#include <stdio.h>


int main() {

    int n, digit, sum = 0;
    scanf("%d", &n);


   while(n > 0)
   {
     digit = n % 10;
     n = n / 10;
     sum = sum + digit; 

   }

   printf("%d\n",sum);
   return 0;
}

