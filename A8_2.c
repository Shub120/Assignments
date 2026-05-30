/*
Wirte a program which accepts width & height of rectrangle from user and calculate its area.
(Area=Width*height)
*/

#include <stdio.h>

double  RectArea(float fWidth,float fHeight)
{
    float Area ;

    Area=fWidth*fHeight;

    return Area;
}

int main()
{
    float fValue1=0.0f,fValue2=0.0f;
    double dRet=0.0;

    printf("Enter the Width:");
    scanf ("%f",&fValue1);

    printf("Enter the height:");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("%lf",dRet);

    return 0;
}