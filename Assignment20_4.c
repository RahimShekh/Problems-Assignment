#include<stdio.h>
#include<Stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int i = 0,iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(( Arr[i] == 11))
        {
            iCnt ++;
        }
    }
    return iCnt;
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

    iRet = Frequency(Brr,iCount);

    printf("The Frquency is:%d",iRet);

    free(Brr);
    return 0;
}