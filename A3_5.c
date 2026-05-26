/*
Accept on Chatacter User And Check Weather That Character is (a,e,i,o,u) or not 
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel (char CValue)
{
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u'
        || CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

int main ()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character \n");

    scanf("%d",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("Its vowel");
    }
    else
    {
        printf("Not a vowel");
    }
    return 0;

}