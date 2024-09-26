#include<stdio.h>
#include<Stdlib.h>

int Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int i = 0,iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if((iStart <= Arr[i]) && (iEnd >= Arr[i]))
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int i = 0;
    int iCount = 0;
    int *Brr = NULL;
    int iRet = 0,iVar = 0;
    int iVar1 = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Start:");
    scanf("%d",&iVar);

    printf("End:");
    scanf("%d",&iVar1);

    Range(Brr,iCount,iVar,iVar1);

    free(Brr);
    return 0;
}