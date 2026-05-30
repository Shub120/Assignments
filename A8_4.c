/*
Write a program which accepts temperature in Fahrenheit and convert it into Celsius.
(1Celsius=(Fahrenheit-32)*(5/9))
*/

#include <stdio.h>

double FhToCs(float fTem)
{
    double Cs;

    Cs=(fTem-32)* (5.0/9.0);

    return Cs;
}

int main ()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter the temprature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet=FhToCs(fValue);

    printf("%lf",dRet);
}