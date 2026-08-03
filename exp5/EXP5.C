#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int spaces = 0, newlines = 0;

    cout << "Enter a line: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            spaces++;
    }

    newlines = 1;

    cout << "Spaces = " << spaces << endl;
    cout << "New Lines = " << newlines << endl;

    return 0;
}