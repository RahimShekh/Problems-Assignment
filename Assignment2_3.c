//Accept one number from user if number is less that 10 the print
//"Hello" otherwise print "Demo".
#include<Stdio.h>

void Display(int iNo)
{
    if((iNo >= 0) && (iNo < 10))
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);

}