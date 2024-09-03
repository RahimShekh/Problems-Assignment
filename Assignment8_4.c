/*
    write a program which accept temperature in Fahrenheit and convert it into celcius.
    (1 celcius = (Fahrenheit - 32) * (5/9))
    1 Degree celcius = 33.8 fahrenheit
    input  : 10
    output : -12.2222  (10 - 32) * (5/9)

    input  : 34
    output : 1.11111  (34 - 32) * (5/9)

    Time Complexity : O(N)
*/
#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0/9.0);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Fahrenheit to Celcius is %lf\n",dRet);

    return 0;
}