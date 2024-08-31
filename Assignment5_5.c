/*
    input : 4
    output : 4 8 12 16 20
    Time Complexity : O(N)
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}
int main()
{
    int iValue = 0;
     
    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}