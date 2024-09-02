/*
    write a program to find even factorial of given number.

    input  : 5
    output : 8  (4 * 2)

    input  : -5
    output : 8  (4 * 2) 

    input  : 10
    output : 384  (10 * 8 * 6 * 4 * 2)
    Time Complexity : O(N)
*/
#include<stdio.h>

int DisplayEvenFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = DisplayEvenFact(iValue);

    printf("The Factorial of Even no is: %d",iRet);

    return 0;
}