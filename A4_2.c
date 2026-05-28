/*
Write A Program Which Accepts Number from user and display its factors in decreasing order
*/



#include<stdio.h>

void FactRev(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=(iNo/2);iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d  ",iCnt);
        }
    }
}

int main ()
{
    int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;

}