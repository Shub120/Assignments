/*
Write a program which accepts a number from the user and display all its non Facors
*/

#include<stdio.h>

    void NonFactRev(int iNo)
    {
        
        int iCnt=0;
        for (iCnt=(iNo/2);iCnt>=1;iCnt++)
        {
            if(iNo/iCnt !=0)
            {
                printf("%d   ",iCnt);

            }
        }
    }



int main ()
{
    int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    NonFactRev(iValue);

    return 0;

}
