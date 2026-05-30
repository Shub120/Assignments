/*
Create seperate visual Studio Project for each problem Statememt seperately. calculate time complexity of each program.
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

    printf("Enter redius:");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("%lf ",dRet);
}