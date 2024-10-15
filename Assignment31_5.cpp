#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void StrCap(char *str) 
{
    bool newWord = true;

    while (*str != '\0') 
    {
        if (isspace(*str)) 
        {
            newWord = true;
        } 
        else if (newWord) 
        {
            *str = toupper(*str);
            newWord = false;
        }
        str++;
    }
}

int main() 
{
    char arr[100];
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    
    StrCap(arr);
    cout << "Modified string: " << arr << endl;
    
    return 0;
}