/*
Accept the number from user and check weather the number is even or odd
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkEven(int iNo)
{
    if (iNo %2==0)
    {
        printf("The number is Even Number ");
    }
    else 
    {
        printf("This number is Odd Number ");
    }


}


int main ()
{
    int iValue =0;
    bool bRet = FALSE;
     
    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    return 0;
}