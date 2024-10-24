#include <iostream>
using namespace std;

int Fact(int iNo) 
{
    if (iNo == 0) 
    {
        return 1;
    }
    return iNo * Fact(iNo - 1);
}

int main() 
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter a number: ";
    cin >> iValue;
    
    iRet = Fact(iValue);
    
    cout << "Factorial of " << iValue << " is: " << iRet << endl;
    
    return 0;
}