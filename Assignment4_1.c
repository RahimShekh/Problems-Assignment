//write a program which accepts a number from a user and display its multiplication
//of factors
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("The multiplication of factors is:%d",iRet);

    return 0;
}