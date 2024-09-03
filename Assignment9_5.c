/* Write a program which accept range from user and display all numbers in
between that range in reverse order

input: 23  30
output:30 29 28 27 26 25 24 23*/

#include<stdio.h>

void RangeSumEven(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Invalid Range\n");
    
    }
    while(iNo2 >= iNo1)
    {
        printf("%d\t",iNo2);
        iNo2--;
    }
    

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the First number:");
    scanf("%d",&iValue1);

    printf("Enter the Second number:");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1,iValue2);

    return 0;
}