/*Accept division of student from user and depends on the division display exam timing.There
are 4 divisions in school as A,B,C,D.Exam of division A at 7AM,B at 8:30 AM ,C at 9:20AM
and D at 10:30AM.*/
#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch >= 'A') && (ch <='D') || (ch >= 'a') && (ch <= 'z'))
    {
        if(ch =='A' || ch =='a')
        {
            printf("Your exam is at 7 AM");
        }
        else if(ch =='B' || ch =='b')
        {
            printf("Your Exam is at 8:30 AM");
        }
        else if(ch =='C' || ch =='c')
        {
            printf("Your exam is at 9:20 AM");
        }
        else if(ch =='D' || ch =='d')
        {
            printf("Your exam is at 10:20 AM");
        }
        else
        {
            printf("Error");
        }
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the Division:";
    cin>>cValue;

    Display(cValue);
    return 0;
}