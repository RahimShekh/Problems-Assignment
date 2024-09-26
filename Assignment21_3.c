#include<stdio.h>
#include<Stdlib.h>

int LastOccurence(int Arr[],int iSize,int iNo)
{
    int i = 0,iCnt = 0;
    int iPos = 0;


    for(i = 0; i < iSize; i++)
    {
        if(( Arr[i] == iNo))
        {
            iPos = i;
        }
    }
    return iPos;
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

    printf("Enter the element u want see index:");
    scanf("%d",&iCnt);

    iRet = LastOccurence(Brr,iCount,iCnt);

    printf("The Last occurence index is:%d",iRet);

    free(Brr);
    return 0;
}