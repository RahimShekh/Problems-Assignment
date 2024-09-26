#include<stdio.h>
#include<Stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int i = 0,iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(( Arr[i] == iNo))
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int i = 0;
    int iCount = 0;
    int *Brr = NULL;
    int iRet = 0,iCnt = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the element to check present or not:");
    scanf("%d",&iCnt);

    iRet = Frequency(Brr,iCount,iCnt);

    if(iRet == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(Brr);
    return 0;
}