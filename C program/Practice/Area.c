//area= 3.1416*radius*radius
#include<stdio.h>
#define PI 3.1416
//include<math.h>
int main()
{
    float r,area;
    printf("Enter radius :");
    scanf("%f",&r);

    area=PI*r*r;
    //area= M_PI*r*r
    printf("The area is:%.2f",area);

    return 0;
}
