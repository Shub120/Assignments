/*
Write a program which accepts N number from user and print all odd number upto N
*/

#include <stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
    for (iCnt=1;iCnt<=iNo;iCnt++)
    { 
        if (iCnt % 2 ==1)
       {
            printf("  %d  ",iCnt);
       }
    }
}

int main ()
{

    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);
}