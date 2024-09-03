/*Write a program which accept range from user and return addition
of all numbers in between that range.(Range should contain +ve numbers only)
Input: 23  30
output: 212
*/

#include<stdio.h>

int RangeDisplay(int iNo1, int iNo2)
{
    int iSum = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return 0;
    }
    while(iNo1 <= iNo2)
    {
        iSum = iNo1 + iSum;
        iNo1++;
    }
    return iSum;

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter the First number:");
    scanf("%d",&iValue1);

    printf("Enter the Second number:");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);

    printf("The Addition is:%d",iRet);
    return 0;
}