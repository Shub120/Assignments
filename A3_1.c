/* 
Write the Program which accept one number from user and print that number of even number on screen
*/

#include <stdio.h>

void printEven(int iNO)
{
   if (iNO<=0)
   {
    return;
   }
   int iCnt;
   for (iCnt=1; iCnt<=iNO; iCnt++)
   {
    printf("%d ",iCnt *2);
   }

}

int main ()
{
    int iValue=0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}