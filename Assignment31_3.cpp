#include <iostream>
#include <cstring>
using namespace std;

void Reverse(char *start, char *end) 
{
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void StrWrdRev(char *str) 
{
    char *word_start = NULL;
    char *temp = str;

    while (*temp) 
    {
        if ((word_start == NULL) && (!isspace(*temp))) 
        {
            word_start = temp;
        }
        if (word_start && (isspace(*temp) || *(temp + 1) == '\0')) 
        {
            if (isspace(*temp)) 
            {
                Reverse(word_start, temp - 1);
            } else {
                Reverse(word_start, temp);
            }
            word_start = NULL;
        }
        temp++;
    }
}

int main() 
{
    char arr[100];
    
    cout << "Enter a string: ";
    cin.getline(arr, 100);

    StrWrdRev(arr);

    cout << "Reversed words in place: " << arr << endl;

    return 0;
}