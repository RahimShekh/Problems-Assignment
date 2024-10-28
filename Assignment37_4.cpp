#include <stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask7 = 0x00000040;  
    unsigned int iMask8 = 0x00000080;  
    unsigned int iMask9 = 0x00000100;  
    unsigned int iResult7 = 0;
    unsigned int iResult8 = 0;
    unsigned int iResult9 = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iResult7 = iNo & iMask7;
    if(iResult7 == iMask7)
    {
        printf("7th bit is ON\n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

    iResult8 = iNo & iMask8;
    if(iResult8 == iMask8)
    {
        printf("8th bit is ON\n");
    }
    else
    {
        printf("8th bit is OFF\n");
    }

    iResult9 = iNo & iMask9;
    if(iResult9 == iMask9)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }

    return 0;
}