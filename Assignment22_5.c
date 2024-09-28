#include<stdio.h>
#include<stdlib.h>

int SumDigit(int Arr[],int iSize)
{
    int i = 0,j = 0;
    int iDigit= 0;
    int iSum = 0;

    printf("The summation of element is:\n");

    for(i = 0; i < iSize; i++)
    {
        iSum = 0;
        for(j = 0; j < Arr[i]; j++)
        {
            iDigit = Arr[i] % 10;

             iSum = iDigit + iSum;

             Arr[i] = Arr[i] / 10;

        }

    printf("%d\n",iSum);
        
    }
    
}
int main()
{
    int i = 0, iRet = 0;
    int *Brr = NULL;
    int iCount = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = SumDigit(Brr,iCount);

    free(Brr);
    return 0;
}