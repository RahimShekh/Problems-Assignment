/*
    write a program to find odd factorial of given number.

    input  : 5
    output : 15  (5 * 3 * 1)

    input  : -5
    output : 15  (5 * 3 * 1) 

    input  : 10
    output : 945   (9 * 7 * 5 * 3 * 1)
    Time Complexity : O(N)
*/
#include<stdio.h>

int DisplayOddFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
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

    iRet = DisplayOddFact(iValue);

    printf("The Factorial of Even no is: %d",iRet);

    return 0;
}