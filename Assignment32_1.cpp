/* Write a program which accept string from user and print below pattern
input: P P A

output: P P A
        P P A
        P P A
*/
#include<iostream>
using namespace std;

void Pattern(char *str)
{
   int iCnt = 0;
   int i = 0, j = 0;

   while(str[iCnt] !='\0')
   {
    iCnt++;
   }

   for(i = 0; i < iCnt; i++)
   {
    for(j = 0; j < iCnt; j++)
    {
        cout<<str[j]<<"\t";
    }
     cout<<endl;
   }
  

}
int main()
{
    char Arr[40];

    cout<<"Enter the String:";
    cin.getline(Arr,40);
    Pattern(Arr);

    return 0;
}