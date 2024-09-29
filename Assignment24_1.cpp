/*Write a program which displays ASCII table .Table contains symbol,Decimal,Hexadecimal and
octal representation and octal representaion of every member from 0 to 255.*/

#include<iostream>
using namespace std;

void Display(int gh)
{
    cout<<gh;
}
int main()
{
    char ch = '\0';

    cout<<"Enter the chracter to check ASCII:";
    cin>>ch;

    Display(ch);
    return 0;
}