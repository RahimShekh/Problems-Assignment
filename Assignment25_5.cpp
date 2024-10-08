/*Write a program which accept string from user and display it in reverse order*/

#include<iostream>
using namespace std;

void Reverse(char *str)
{
    char *Start = str;
    char *End = str;
    char temp;

    while(*End !='\0')
    {
        End++;
    }
    End--;
    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;
    }
}
int main()
{
    char Arr[30];

    cout<<"Enter the string :";
    cin.getline(Arr,30);

    Reverse(Arr);

    cout<<"The Reverse string :"<<Arr;
    return 0;
}