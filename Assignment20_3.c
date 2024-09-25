#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[],int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
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
    int *Brr = NULL,iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr  =(int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Check(Brr,iCount);

    if(iRet == 1)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is  Absent");
    }

    free(Brr);
    return 0;
}