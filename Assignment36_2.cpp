#include <iostream>
using namespace std;

int Max(int iNo) 
{
    if (iNo < 10) 
    {
        return iNo;
    }
    
    int lastDigit = iNo % 10;
    int maxRemaining = Max(iNo / 10);
    
    return (lastDigit > maxRemaining) ? lastDigit : maxRemaining;
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Max(iValue);
    
    cout << "Largest digit: " << iRet << endl;
    
    return 0;
}