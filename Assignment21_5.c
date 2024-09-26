#include<stdio.h>
#include<Stdlib.h>

int ProductOdd(int Arr[],int iSize)
{
    int i = 0,iMult = 1;

    for(i = 0; i < iSize; i++)
    {
       if(Arr[i] % 2 != 0)
       {
        iMult = iMult * Arr[i];
       }
    }
    return iMult;
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
   
    iRet = ProductOdd(Brr,iCount);
    printf("The Product is:%d\n",iRet);

    free(Brr);
    return 0;
}