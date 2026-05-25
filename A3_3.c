/*
Write a Program which Accepts number from user and prints even factors from that number */

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;

    if (iNo<=0)
    {
        iNo=-iNo;

    }

    for (i=1;i<=iNo/2;i++)
    {
        if (iNo % i==0 && i%2==0)
        {
           printf("%d ",i);
        }
    }
}

int main()
{
    int iValue=0;

    printf("ENter the number : \n");
    scanf("%d",&iValue);
    
    DisplayEvenFactor (iValue);
}
