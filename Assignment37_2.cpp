#include <stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask5 = 0x00000010;  
    unsigned int iMask18 = 0x00020000; 
    unsigned int iResult5 = 0;
    unsigned int iResult18 = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iResult5 = iNo & iMask5;
    if(iResult5 == iMask5)
    {
        printf("5th bit is ON\n");
    }
    else
    {
        printf("5th bit is OFF\n");
    }

    iResult18 = iNo & iMask18;
    if(iResult18 == iMask18)
    {
        printf("18th bit is ON\n");
    }
    else
    {
        printf("18th bit is OFF\n");
    }

    return 0;
}