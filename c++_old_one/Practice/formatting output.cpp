#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{

    float num1,num2;
    cout<<"Enter 2 number : ";
    cin >> num1>>num2;

    cout<<showpoint ;
    cout<<fixed;
    cout<<setprecision(2);

     //sum
    float sum = num1+num2;
    cout<<setw(18)<<"SUM : " << sum <<endl;

    //cout<<noshowpoint;

    //sub
    float sub = num1-num2;
    cout<<setw(18)<<"Subtraction : " << sub <<endl;

    //multiplication
    float mul = num1*num2;
    cout<<setw(18)<<"Multiplication : " << mul <<endl;

    //Division
    float div = num1/num2;
    cout<<setw(18)<<"Division : " << div <<endl;


    //Remainder
    //int rem = num1%num2;
    //cout<<"Remainder : " << rem <<endl;

    getch();
}
