//program to divide two numbers
#include<Stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 / iNo2;
    return iAns;
}
int main()
{
   int iValue1 = 15,iValue2 = 5;
   int iRet = 0;

   iRet = Divide(iValue1,iValue2);

   printf("Division is : %d",iRet);

   return 0;
}