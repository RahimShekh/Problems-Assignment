/*Accept chracter from user.if chracter is small display its corresponding capital
chracter,and if it small then display its corresponding capital.In other cases display as
it is. */

#include <iostream>
using namespace std;


char Display(char ch)
{
    
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;  
    }
    
    else if (ch >= 'A' && ch <= 'Z')
    {
        return ch;  
    }
    else
    {
        return ch; 
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    cout << "Enter the character: ";
    cin >> cValue;

    cRet = Display(cValue);

    cout << "The result is: " << cRet << endl;
    return 0;
}