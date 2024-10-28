#include <stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00004000; 
    unsigned int iResult = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}