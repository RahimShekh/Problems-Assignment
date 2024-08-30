#include <stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'A' || CValue == 'e' || CValue == 'E' || CValue == 'i' || CValue == 'I' || CValue == 'o' || CValue == 'O' || CValue == 'u' || CValue == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel ");
    }
    else
    {
        printf("It is not Vowel ");

    }

    return 0;
}