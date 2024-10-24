#include <iostream>
using namespace std;

int Min(int iNo) 
{
    if (iNo < 10) 
    {
        return iNo;
    }
    
    int lastDigit = iNo % 10;
    int minRemaining = Min(iNo / 10);
    
    return (lastDigit < minRemaining) ? lastDigit : minRemaining;
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Min(iValue);
    
    cout << "Smallest digit: " << iRet << endl;
    
    return 0;
}