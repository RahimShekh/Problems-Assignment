/*
    write a program which accept area in square feet and convert it into square meter.
    (1 square feet = 0.0929 Square meter)
    input  : 5
    output : 0.464515

    input  : 7
    output : 0.650321

    Time Complexity : O(N)
*/
#include<stdio.h>

float SqFeetToSqMeter(float fNo)
{
    float fAns = 0.0f;

    fAns = fNo * 0.0929;

    return fAns;
}
int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Square feet:");
    scanf("%f",&fValue);

    fRet = SqFeetToSqMeter(fValue);

    printf("The Conversion of Sq feet to Sq meter is:%f",fRet);
}