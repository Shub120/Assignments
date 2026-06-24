/*
write a program which accept number from user and return multiplication of all digits 
*/
#include<stdio.h>
int MultiDesign(int iNo)
{
    int iDigit=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
}
int main ()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet= MultiDesign(iValue);

    printf("%d",iRet);

    return 0;
}