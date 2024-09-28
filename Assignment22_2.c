#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int i = 0;
    int iMin = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    iRet = Minimum(Brr,iCount);

    printf("Smallest number is:%d",iRet);
    free(Brr);
    return 0;
}