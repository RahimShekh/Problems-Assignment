/*Accept N numbers from user and return frequency of even numbers.

input: N:   6
      Elements: 85  66   3   80  93   88

output:  3
*/
#include<stdio.h>
#include<Stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int i = 0,iCnt = 0;

    for(i = 0; i < iSize; i++)
    {
        if(( Arr[i] % 2 == 0))
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

    iRet = CountEven(Brr,iCount);

    printf("The Frquency is:%d",iRet);

    free(Brr);
    return 0;
}