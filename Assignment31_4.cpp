
#include <iostream>
#include <cstring>
using namespace std;

void RemoveSpaces(char *src, char *dest) 
{
    while (*src != '\0') 
    {
        if (!isspace(*src)) 
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() 
{
    char arr[100];
    char brr[100]; 
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    
    RemoveSpaces(arr, brr);
    
    cout << "String after removing white spaces: " << brr << endl;
    
    return 0;
}