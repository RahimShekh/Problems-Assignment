/*Write a program which accept number from user and count frequency
of 4 in it.
Input: 2395
output: 0

Input: 9440
output: 2
*/
#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);
    return 0;
}