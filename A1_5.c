// Accept one number from user and print that number of * on the Screen

#include <stdio.h>
void Accept(int No)
{
    int iCNT=0;

    for (iCNT=0;iCNT<No;iCNT++)
    {
        printf("*");

    }
}
int main ()
{
    int iValue=0;
    iValue=5;

    Accept(iValue);

    return 0;
}