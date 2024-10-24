#include <iostream>
using namespace std;

int Reverse(int iNo, int rev = 0) 
{
    if (iNo == 0) 
    {
        return rev;
    }
    
    int lastDigit = iNo % 10;
    
    rev = rev * 10 + lastDigit;
    
    return Reverse(iNo / 10, rev);
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Reverse(iValue);
    
    cout << "Reversed number: " << iRet << endl;
    
    return 0;
}