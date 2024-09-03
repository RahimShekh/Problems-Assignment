/*
    write a program which accept width & height of rectangle from user and calculate its area.
    Consider value of PI as 3.14 (Area = width * Height)
    input  : 5.3    9.78
    output : 51.834

    Time Complexity : O(N)
*/
#include<stdio.h>

float DisplayArea(float fWidth, float fHeight)
{
    float PI = 3.14f;
    float Area = 0.0f;

    Area = fWidth * fHeight;

    return Area;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter the width:");
    scanf("%f",&fValue1);

    printf("Enter the height:");
    scanf("%f",&fValue2);

    fRet = DisplayArea(fValue1,fValue2);

    printf("The Area of rectangle is:%f",fRet);
    return 0;
}