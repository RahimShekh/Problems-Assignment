/*Write a program which accept string from user and print below pattern

input:  ppa
output : P P A
         P P A
         P P A
*/
#include<iostream>
using namespace std;

void Pattern(char *str)
{
    int iCount = 0;
    int i = 0, j = 0;

    while(str[iCount] !='\0')
    {
        iCount++;
    }

    for(i = 0; i < iCount; i++)
        {
        for(j = 0; j < iCount; j++)
        {
            if((str[j] >='a') && (str[j] <'z'))
            {
                str[j] = str[j] - 32;
                cout<<str[j]<<"\t";
                
            }
            else
            {
                cout<<str[j]<<"\t";
            }
            
            
        }   
        cout<<endl;
        }
}
int main()
{
    char Arr[30];
    cout<<"enter the string:";
    cin.getline(Arr,30);

    Pattern(Arr);
    return 0;
}