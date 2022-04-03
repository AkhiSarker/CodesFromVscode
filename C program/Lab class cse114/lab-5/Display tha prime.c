#include<stdio.h>
#include<math.h>

int main()
{
	int p,x=1,n;

	printf("Enter any number : ");
    scanf("%d",&n);

	for (int i =2; i<=n;i++)
	{
		x=1;
		 p=sqrt(i);
		 for (int j = 2; j<=p;j++)
		  {
			 if(i%j==0)
			 {
				x=0;
				break;
			 }
		   }

       if(x==1)
       {
       	printf("%d ",i);
       }

	}
	getch();
}
