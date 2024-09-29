/*Accept character from user and display its ASCII value in decimal octal and hexadecimal*/

#include <iostream>
#include <iomanip> // For std::oct and std::hex
using namespace std;

void Display(char ch)
{
    int asciiValue = static_cast<int>(ch); // Convert char to int to get its ASCII value

    cout << "ASCII value of '" << ch << "' in different formats:" << endl;
    cout << "Decimal:    " << asciiValue << endl;
    cout << "Octal:      " << oct << asciiValue << endl;
    cout << "Hexadecimal: " << hex << asciiValue << endl;

    // Reset formatting to default
    cout << dec; // Reset to decimal format
}

int main()
{
    char cValue = '\0';

    cout << "Enter the character: ";
    cin >> cValue;

    Display(cValue);
    return 0;
}