/*
    write a program which accept radius of circle from user and calculate its area.
    Consider value of PI as 3.14 (Area = PI * Radius * Radius)

    input  : 5.3
    output : 88.2026

    input  : 10.4
    output : 339.6224

    Time Complexity : O(N)
*/

#include<stdio.h>

float DisplayArea(float fNo)
{
    float PI = 3.14;
    float Area = 0.0f;

    Area = PI * fNo * fNo;

    return Area;

}
int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Radius:");
    scanf("%f",&fValue);

    fRet = DisplayArea(fValue);

    printf("The Radius of Circle:%f",fRet);

    return 0;
}