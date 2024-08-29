//Accept one number from user and print that number of * on Screen
#include<Stdio.h>

void Display(int iNo)
{

    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}