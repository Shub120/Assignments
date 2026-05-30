/*
Write a program to find factorial of given number 
*/
#include<stdio.h>

void Factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    printf(" %d",iFact);
   
    
}

int main ()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Factorial(iValue);
    return 0;
}