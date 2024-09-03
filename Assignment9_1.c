/* write a program which accept Range from user and display all numbers in 
between that range.
input: 23  30
output: 23 24 25 26 27 28 29 30
*/
#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    while(iNo1 <= iNo2)
    {
        printf("%d\t",iNo1);
        iNo1++;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number:");
    scanf("%d",&iValue1);

    printf("Enter the second number:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}