/*
    input : 5
    output :  * * * * * # # # # #
    Time Complexity : O(N)
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t",iCnt);
        iCnt++;
    }
      iCnt = 1;
      while(iCnt <= iNo)
    {
        printf("#\t",iCnt);
        iCnt++;
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