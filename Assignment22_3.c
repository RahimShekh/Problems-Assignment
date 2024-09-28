#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int i = 0;
    int iMin = Arr[0];
    int iMax = 1;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        else if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax - iMin;
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

    printf("The Difference Largest and Smallest:%d",iRet);
    
    free(Brr);
    return 0;
}