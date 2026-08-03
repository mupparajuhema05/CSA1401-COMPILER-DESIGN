#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter a line: ";
    getline(cin, s);

    if (s.find("//") == 0)
    {
        cout << "Comment ignored";
    }
    else if (s.find("/*") == 0 && s.find("*/") != string::npos)
    {
        cout << "Comment ignored";
    }
    else
    {
        for (char c : s)
        {
            if (c != ' ' && c != '\t')
                cout << c;
        }
    }

    return 0;
}