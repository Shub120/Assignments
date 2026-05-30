/*
Write a program which accepts number from user and display its table
*/
#include <stdio.h>
void Table (int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for (iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d ",iNo*iCnt);
    }
}
int main ()
{
    int iValue =0;

    printf("Enter the first number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}