#include <stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask1 = 0x00000001;   
    unsigned int iMask32 = 0x80000000;  
    unsigned int iResult1 = 0;
    unsigned int iResult32 = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iResult1 = iNo & iMask1;
    if(iResult1 == iMask1)
    {
        printf("1st bit is ON\n");
    }
    else
    {
        printf("1st bit is OFF\n");
    }

    iResult32 = iNo & iMask32;
    if(iResult32 == iMask32)
    {
        printf("32nd bit is ON\n");
    }
    else
    {
        printf("32nd bit is OFF\n");
    }

    return 0;
}