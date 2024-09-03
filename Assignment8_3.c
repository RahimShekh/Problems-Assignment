/*
    write a program which accept distance in kilometer and convert it into meter.
    (1 kilometer = 1000 Meter)
    input  : 5
    output : 5000

    input  : 12
    output : 12000

    Time Complexity : O(N)
*/

#include<stdio.h>

int KiloToMeter(int iNo)
{
    int iMeter = 1000;
    int iAns = 0;

    iAns = iMeter * iNo;

    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the kilometer:");
    scanf("%d",&iValue);

    iRet = KiloToMeter(iValue);

    printf("The Conversion of kilometer to meter is:%d",iRet);
    return 0;
}