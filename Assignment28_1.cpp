/* Write a program which accept string from user and copy the content of that string from
user and copy the content of that string into another string(implement strcpy() function)
*/
#include<iostream>
using namespace std;

void Strcpy(char *str, char *btr)
{
    while(*str !='\0')
    {
        *btr = *str;
        str++;
        btr++;
    }
    *btr ='\0';
    
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the string:"<<endl;;
    cin.getline(Arr,30);
    
    Strcpy(Arr,Brr);

    cout<<"The copied string is:"<<Brr;
    return 0;
}