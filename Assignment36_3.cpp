#include <iostream>
using namespace std;

int Small(char *str) 
{
    if (*str == '\0') 
    {
        return 0;
    }
    return ((*str >= 'a' && *str <= 'z') ? 1 : 0) + Small(str + 1);
}

int main() 
{
    char arr[100];
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    
    int count = Small(arr);
    
    cout << "Number of lowercase characters: " << count << endl;
    
    return 0;
}