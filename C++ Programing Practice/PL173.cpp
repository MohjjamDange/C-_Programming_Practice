#include<stdio.h>

// *    *   *   *

void DisplayI()
{
    int iCnt = 0;

    while(iCnt < 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt2 = 0;

    if(iCnt2 < 4)
    {
        printf("*\t");
        iCnt2++;
        DisplayR();         // Recurssive call
    }
}

int main()
{
    DisplayR();

    return 0;
}