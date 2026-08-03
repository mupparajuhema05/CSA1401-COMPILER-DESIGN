#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter a line: ";
    getline(cin, s);

    if (s.substr(0, 2) == "//")
    {
        cout << "Single Line Comment";
    }
    else if (s.substr(0, 2) == "/*" && s.substr(s.length() - 2) == "*/")
    {
        cout << "Multi Line Comment";
    }
    else
    {
        cout << "Not a Comment";
    }

    return 0;
}