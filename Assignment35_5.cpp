#include <iostream>
using namespace std;

int Mult(int iNo) 
{
    if (iNo < 10) 
    {
        return iNo;
    }
        return (iNo % 10) * Mult(iNo / 10);
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Mult(iValue);
    
    cout << "Product of digits: " << iRet << endl;
    
    return 0;
}