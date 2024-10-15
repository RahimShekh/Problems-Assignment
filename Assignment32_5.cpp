/*Write a program which accept string from user and print below pattern

input:  PPA
output : p p a
         p p a
         p p a
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
            if((str[j] >='A') && (str[j] <'Z'))
            {
                str[j] = str[j] + 32;
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