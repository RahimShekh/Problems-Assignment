#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;  

    if (iNo & iMask)
    {
        iNo = iNo & ~iMask;
    }
    
    return iNo;
}

int main()
{
    UINT iNo = 0;
    UINT iModifiedNo = 0;

    printf("Enter number: ");
    scanf("%u", &iNo);

    iModifiedNo = OffBit(iNo);

    printf("Modified number: %u\n", iModifiedNo);

    return 0;
}
