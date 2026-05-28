/*
Write a program which accept number from user and display its multiplaction of factors
*/

#include<stdio.h>

int MultFact(int iNo)
{
    if (iNo <0)
    {
        iNo=-iNo;
    }
    if (iNo==0||iNo==1)
    {
        return 0;
    }

    int iCnt=0;
    int iMul=1;
    int iHasFactors=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    { 
    if ((iNo % iCnt)==0 )
    {
        iMul=iMul*iCnt;
        iHasFactors=1;
    }
    }

    if(iHasFactors=1)
    {
        return iMul;
    }
    else{
        return 0;
    }


}


int main ()
{
    int iValue=0;
    int iRet =0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet= MultFact(iValue);

    printf("%d",iRet);

    return 0;
}