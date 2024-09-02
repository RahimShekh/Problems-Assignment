/*
    write a program which returns difference between Even factorial and odd factorial of given number.

    input  : 5
    output : -7  (8 - 15)

    input  : -5
    output : -7  (8 - 15) 

    input  : 10
    output : 2895   (3840  - 945)
    Time Complexity : O(N)
*/
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1, iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if( (iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else if( (iCnt % 2) != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return iFact1 - iFact2;
}

int main()
{
    int iValue = 0, iRet = 0; 

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}