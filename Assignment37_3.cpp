#include <stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask7 = 0x00000040;    
    unsigned int iMask15 = 0x00004000;   
    unsigned int iMask21 = 0x00200000;   
    unsigned int iMask28 = 0x10000000;   
    unsigned int iResult7 = 0;
    unsigned int iResult15 = 0;
    unsigned int iResult21 = 0;
    unsigned int iResult28 = 0;

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

    iResult15 = iNo & iMask15;
    if(iResult15 == iMask15)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    iResult21 = iNo & iMask21;
    if(iResult21 == iMask21)
    {
        printf("21st bit is ON\n");
    }
    else
    {
        printf("21st bit is OFF\n");
    }

    iResult28 = iNo & iMask28;
    if(iResult28 == iMask28)
    {
        printf("28th bit is ON\n");
    }
    else
    {
        printf("28th bit is OFF\n");
    }

    return 0;
}