//Accept the two numbers from user and display first number in seconds number of times.

#include <stdio.h>

void Display(int iNo,int iFrequency)
{
    int i =0;

    for (i=0;i<iFrequency;i++)
    {
        printf("%d  ",iNo);
    }
}

int main ()
{
    int iValue=0;
    int iCount=0;

    printf("Enter the number: ");
    scanf("%d",& iValue);

    printf("Enter the second number :");
    scanf("%d",& iCount);

    Display(iValue,iCount);

    return 0;
}