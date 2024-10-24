#include <iostream>
using namespace std;

int WhiteSpace(char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    return (*str == ' ' || *str == '\t' || *str == '\n' ? 1 : 0) + WhiteSpace(str + 1);
}

int main() 
{
    char arr[100];
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    
    int count = WhiteSpace(arr);
    
    cout << "Number of white spaces: " << count << endl;
    
    return 0;
}