/*Accept number from user and display below pattern.
Input: 8
Output: 2 4 6 8 10 12 14 16 
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iCnt * 2;
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