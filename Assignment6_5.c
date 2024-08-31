/*
    input : 2
    output : 20 18 16 14 12 10 8 6 4 2 

    input : -5
    output : 50 45 40 35 30 25 20 15 10 5 
    Time Complexity : O(N)
*/
#include<stdio.h>

   void Display(int iNo)
   {
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        iMult = iCnt * iNo;

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