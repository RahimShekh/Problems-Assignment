/*
    Write a program which accept string from user and return length of largest word.

    Input : "Marvellous Multi OS Infosystems"

    Output :  11
*/
#include<iostream>
using namespace std;

int LargestWord(char *str) {
    int iCount = 0; // Count for the current word
    int iMax = 0;   // Maximum length of the largest word

    while (*str != '\0') {
        if (*str == ' ') {
            // If a space is encountered, compare the current word length
            if (iCount > iMax) 
            {
                iMax = iCount; // Update max length if current word is larger
            }
            iCount = 0; // Reset count for the next word
        } else 
        {
            iCount++; // Increment count for the current word
        }
        str++;
    }

    // Final check for the last word in the string
    if (iCount > iMax) {
        iMax = iCount;
    }

    return iMax; // Return the length of the largest word
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    iRet = LargestWord(Arr);
    return 0;
}
