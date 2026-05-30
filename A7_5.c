/*
Write a program which returns difference between Even factorial and Odd Factorial of  a given number 
*/

#include <stdio.h>  
int EvenFactorial (int ino)
{
    int iCnt=0;
    int iEven=0;
    int iOdd=0;
   for (iCnt = 2; iCnt <= ino; iCnt = iCnt + 2)
    {
        iEven = iEven * iCnt;
    }

    
    for (iCnt = 1; iCnt <= ino; iCnt = iCnt + 2)
    {
        iOdd = iOdd * iCnt;
    }

    // Logic 3: Return the difference
    return iEven - iOdd;

}

int main ()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);
 
    printf("Factorial is difference is: %d",iRet);

    return 0;
}