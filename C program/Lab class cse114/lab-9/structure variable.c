#include<stdio.h>

 typedef struct
{
    int day;
    int month;
    int year;
}date;

int main()
{
    date d1;

    printf("Enter year: ");
    scanf("%d", &d1.year);

    printf("Enter month: ");
    scanf("%d", &d1.month);

    printf("Enter day: ");
    scanf("%d", &d1.day);

    printf("\n%d/%d/%d\n", d1.year, d1.month, d1.day);

    return 0;
}
