/*
Write a program Which Accepts radius of circle from user and calculate its area .Consider value of PI as 3.14.
*/

#include <stdio.h>

double CircleArea(float fRadius)
{
    double Ans;
    float PI=3.14f;

    Ans=PI*fRadius*fRadius;

    return Ans;
}
int main ()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter raius:");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("%lf ",dRet);
}