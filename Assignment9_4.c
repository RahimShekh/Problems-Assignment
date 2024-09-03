/*Write a program which accept range from user addition of all even
numbers in between that range
input: 23 30
output: 108

input:10 18
output: 70
*/
#include<stdio.h>

int RangeSumEven(int iNo1, int iNo2)
{
    int iSum = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range\n");
        return 0;
    }
    while(iNo1 <= iNo2)
    {
        if(iNo1 % 2 == 0)
        {
            iSum = iNo1 + iSum;
        }
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

    iRet = RangeSumEven(iValue1,iValue2);

    printf("The Addition is:%d",iRet);
    return 0;
}