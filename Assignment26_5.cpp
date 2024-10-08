#include<iostream>
using namespace std;

int Strspce(char *str)
{
    int iCount = 0;
    while(*str !='\0')
    {
        if(*str ==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    iRet = Strspce(Arr);

    cout<<"The count of white space:"<<iRet;
    return 0;
}