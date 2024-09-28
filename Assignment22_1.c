#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int i = 0;
    int iMax = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

    iRet = Maximum(Brr,iCount);

    printf("Largest number is:%d",iRet);
    free(Brr);
    return 0;
}