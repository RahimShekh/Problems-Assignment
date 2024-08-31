/*
    input : 18
    output : 1 3 5 7 9 11 13  15 17
    Time Complexity : O(N)
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt < iNo)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
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