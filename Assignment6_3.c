/*
    input : 5
    output : 120    (5 * 4 * 3 * 2 * 1 )

    input : -5
    output : 120    (5 * 4 * 3 * 2 * 1 ) 
    Time Complexity : O(N)
*/

#include<stdio.h>

int MultiNum(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iCnt * iMult;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = MultiNum(iValue);

    printf("Multiplication is:%d",iRet);

    return 0;
}