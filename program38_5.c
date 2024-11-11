#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F;  

    iNo = iNo | iMask;

    return iNo;
}

int main()
{
    UINT iNo = 0;
    UINT iModifiedNo = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iModifiedNo = OnBit(iNo);

    printf("Modified number: %u\n", iModifiedNo);

    return 0;
}
