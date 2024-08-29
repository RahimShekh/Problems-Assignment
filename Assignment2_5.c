//Accept number from user and check whether number is Even or odd
#include<Stdio.h>
#include<Stdbool.h>

bool ChkEven(int iNo)
{
    if((iNo % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}