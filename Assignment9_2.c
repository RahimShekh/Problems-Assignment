/*Write a program which accept range from user and display all
 even numbers in between that range
 Input: 23  35
 output: 24 26 28 30 32 34
 */

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    while(iNo1 <= iNo2)
    {
        if(iNo1 % 2 == 0)
        {
            printf("%d\t",iNo1);
            
        }
        iNo1++;
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the First number:");
    scanf("%d",&iValue1);

    printf("Enter the Second number:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}