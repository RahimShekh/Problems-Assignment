/* Write a program which accept string from user and copy that chracter of that string by
removing all white spaces.
input: Marvel lous pyth on
outout: Marvellouspython
*/
#include<iostream>
using namespace std;

void Strcpy(char *src, char *des)
{
    while(*src !='\0')
    {
        if(*src !=' ')
        {
            *des = *src;
            des++;
        }
        src++;
        *des ='\0';
    }
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    Strcpy(Arr,Brr);

    cout<<"The String is:"<<Brr;
    return 0;
}