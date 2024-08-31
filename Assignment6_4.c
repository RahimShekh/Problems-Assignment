/*
    input : 2
    output : 2 4 6 8 10 12 14 16 18 20 

    input : -5
    output : 5 10 15 20 25 30 35 40 45 50 
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

    for(iCnt = 1; iCnt <= 10; iCnt++)
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