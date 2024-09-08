/* Write a program which accept number from user and return the count even
digits.
Input : 2395
output: 1

Input : 1018
Output: 2
*/
#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount++;
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the Digit:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}