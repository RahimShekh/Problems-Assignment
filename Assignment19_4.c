#include<stdio.h>
#include<Stdlib.h>

void Divisible(int Arr[],int iSize)
{
    int i = 0,iSum = 0,iSum1 = 0;

    printf("The number Divisible by 3 & 5 is:\n");
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]% 5 == 0) && ( Arr[i] % 3 == 0))
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
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Divisible(Brr,iCount);

    free(Brr);
    return 0;
}