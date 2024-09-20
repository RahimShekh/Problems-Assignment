#include<stdio.h>
#include<Stdlib.h>

void Mult(int Arr[],int iSize)
{
    int i = 0,iSum = 0,iSum1 = 0;

    printf("The Multiplies of 11 is:\n");
    for(i = 0; i < iSize; i++)
    {
       if(Arr[i] % 11 == 0)
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

    Mult(Brr,iCount);

    free(Brr);
    return 0;
}