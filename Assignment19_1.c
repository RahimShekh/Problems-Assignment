/*Accept N numbers from user and return difference between summation of even elements
and odd elements.
Input:  N :    6

Elements: 85 66  3  80  93  88

output: 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>

int Differnce(int Arr[],int iSize)
{
    int i = 0,iSum = 0,iSum1 = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]% 2 == 0)
        {
            iSum = iSum + Arr[i];
        }
        else
        {
            iSum1 = iSum1 + Arr[i];
        }
    }
    return iSum - iSum1;
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

    iRet = Differnce(Brr,iCount);

    printf("The differnce between Even and odd is:%d",iRet);
    free(Brr);
    return 0;
}