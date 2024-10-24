#include <iostream>
using namespace std;

int Sum(int iNo) 
{
    if (iNo < 10) 
    {
        return iNo;
    }
    return iNo % 10 + Sum(iNo / 10);
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Sum(iValue);
    
    cout << "Sum of digits: " << iRet << endl;
    
    return 0;
}