/*Write a program which accept number from user and check whether it contains 0
in it or not.
input : 2395
output: There is no zero

input: 9000
output: It contains zero*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo /10;
    }
    return FALSE;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}