#include <iostream> // for cout and endl
#include <stdio.h> // For scanf and printf
#include <stdlib.h> // for rand() and srand()
#include <time.h> // for time() 

using namespace std;

int main()
{
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        cout <<1 + (rand()%5) << endl;
    }
}