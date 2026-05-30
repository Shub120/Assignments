/*
Accept Amount in US doller and return its Curroesponding value in indian currency Consider 1$ as 70rupees
 */

 #include <stdio.h>

 int DollarToINR(int ino)
 {
    
    int Doll=70;
    int Ans=0;

   Ans=ino*Doll;

   return Ans;
 }
 int main ()
 {
    int iValue=0;
    int iRet=0;

    printf("Enter the number of USD:");
    scanf("%d",&iValue);
    
    iRet=DollarToINR(iValue);

    printf("Value in INR is :%d",iRet);

    return 0;
 }
