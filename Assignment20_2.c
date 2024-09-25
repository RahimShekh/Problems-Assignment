#include<stdio.h>
#include<Stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int i = 0,iDiff1 = 0,iDiff2 = 0;

    for(i = 0; i < iSize; i++)
    {
        if(( Arr[i] % 2 == 0))
        {
            iDiff1++;
        }
        else
        {
            iDiff2++;
        }
    }
    return iDiff1 - iDiff2;
}
int main()
{
    int i = 0;
    int iCount = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CountEven(Brr,iCount);

    printf("The Differnce between odd and even is:%d",iRet);

    free(Brr);
    return 0;
}