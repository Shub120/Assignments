/*
Write a program which accepts area in square feet and convert it into square meters.
(1 square meter = 10.764 square feet)
*/

#include <stdio.h>

double SquareMeter (int iValue)
{
    
    double dMeter=0.0;
    double sqft=0.0929;

    dMeter=iValue*sqft;

    return dMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in Square feet:");
    scanf("%d",&iValue);

    dRet=SquareMeter (iValue);

    printf("%lf",dRet);

   return 0;

}