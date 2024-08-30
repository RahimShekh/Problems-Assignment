#include<stdio.h>

int Fact(int iNo)
{

  int iCnt = 0;
    

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    

    return 0;
}