/*
write a program which Accepts number from user and return Summation of all its non factors*/

#include<stdio.h>

int SumNonFact(int ino)
{
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=1;iCnt<ino;iCnt++)
    {
        if(ino%iCnt !=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main ()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("Summation of non-factors is : %d\n",iRet);

    return 0;

}