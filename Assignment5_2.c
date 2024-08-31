/*
    input : 8
    output : 1 2 3 4 5 6 7 8 
    Time Complexity : O(N)
*/

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\t",iCnt);
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