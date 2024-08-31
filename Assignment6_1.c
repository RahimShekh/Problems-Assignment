/*
    input : 75
    output : medium 
    Time Complexity : N
*/

#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("medium\n");
    }
    else
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0; 

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}