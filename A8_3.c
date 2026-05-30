/*
Write a program which accepts distance in kilometer and convert it into meters
(1km=1000 Meters)
*/

#include <stdio.h>

int KmToMeter(int iKm)
{
    int iMeter=0;
    
    iMeter=iKm*1000;
    
    return iMeter;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the Distance:");
    scanf("%d",&iValue);

    iRet=KmToMeter(iValue);

    printf("%d",iRet);

    return 0;

}