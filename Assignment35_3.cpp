#include <iostream>
using namespace std;

int Strlen(char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    return 1 + Strlen(str + 1);
}

int main() 
{
    char arr[20];
    
    cout << "Enter a string: ";
    cin >> arr;
    
    int iRet = Strlen(arr);
    
    cout << "Number of characters: " << iRet << endl;
    
    return 0;
}