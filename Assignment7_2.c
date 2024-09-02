/*
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.

    input : 10
    output :  700

    input : 3
    output :  210

    input : 1200
    output : 84000
    Time Complexity : O(N)
*/

#include<stdio.h>

int Display(int iNo)
{
    int iDollar = 70;
    int iRupee = 0;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iRupee = iDollar * iCnt;
    }
    return iRupee;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Dollar:");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("The indian Currency is:%d",iRet);

    return 0;
}