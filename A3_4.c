

/* Accept one character from the user and convert the case of that character */

#include <stdio.h>

void DisplayConvert (char CValue)
{
   
    if(CValue >= 'a' && CValue <= 'z')
    {
        
        CValue = CValue - 32; 
        printf("%c",CValue);
    }
   
    else if (CValue >= 'A' && CValue <= 'Z')
    {
       
        
        CValue = CValue + 32;
        printf("%c",CValue);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : \n ");
    scanf("%c",&cValue);
    
    DisplayConvert(cValue);
}