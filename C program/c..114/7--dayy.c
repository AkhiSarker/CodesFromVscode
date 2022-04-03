#include <stdio.h>

int main() {
    int n;
    scanf(" %d",&n);
    if(n==1||n==8||n==15||n==22||n==29||n==36||n==43||n==50)
        printf("Saturday");
    if(n==2||n==9||n==16||n==23||n==30||n==37||n==44)
        printf("Sunday");
    if(n==3||n==10||n==17||n==24||n==31||n==38||n==45)
        printf("Monday");
    if(n==4||n==11||n==18||n==25||n==32||n==39||n==46)
        printf("Tuesday");
    if(n==5||n==12||n==19||n==26||n==33||n==40||n==47)
        printf("Wednesday");
    if(n==6||n==13||n==20||n==27||n==34||n==41||n==48)
        printf("Thursday");
    if(n==7||n==14||n==21||n==28||n==35||n==42||n==49)
        printf("Friday");
    return 0;
}
