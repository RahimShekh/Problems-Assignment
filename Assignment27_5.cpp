//Write a program to reverse the string
#include<iostream>
using namespace std;

void StrRev(char *str)
{
    char *Start = str;
    char *End = str;
    char Temp ='\0';

    while(*End !='\0')
    {
        End++;
    }
    End--;

    while(Start < End)  //  Address se travel kar
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;

        Start++;
        End--;
    }
}
int main()
{
    char Arr[30];

    cout<<"Enter the String:";
    cin>>Arr;

    StrRev(Arr);

    cout<<"The Reversed String :"<<Arr;
    return 0;
}