/*Write a program which accept number from user and return multiplication of all
digits.
Input: 2395
output: 270

Input : 1018
output: 0
*/
#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult++;
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Digit:");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}