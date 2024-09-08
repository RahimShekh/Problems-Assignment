/*
    write a program which accept number from user and return difference between summation 
    aof even digits and summation of odd digits.


    input  : 2395
    output : -15  (2 - 17)

    input  : 1018
    output : 6  (8 - 2)

    input  : 8440
    output : 16   (16 - 0)

    input  : 5733
    output : -18  ( 0 - 18)

    Time Complexity : O(N)
*/

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum1 = 0, iSum2 = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10; 

        if( (iDigit % 2) == 0 )
        {
            iSum1 = iSum1 + iDigit;
        }
        else if((iDigit % 2) != 0 )
        {
            iSum2 = iSum2 + iDigit;
        }

        iNo = iNo / 10;
    }
    return iSum1 - iSum2;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}
