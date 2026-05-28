/*
Write a program which accepts number from user and print that number of $ and * on screen */

#include <stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("$    *   ");
    }
}
int main ()
{
    int iValue=0;

    printf("Enter the times of number you want to print ");
    scanf("%d",&iValue);

    Pattern(iValue);

}