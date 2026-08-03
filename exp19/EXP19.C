#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int characters = 0, words = 0, lines = 1;
    bool inWord = false;

    cout << "Enter a line: ";
    getline(cin, s);

    for(char ch : s)
    {
        if(ch != ' ' && ch != '\t')
            characters++;

        if(ch != ' ' && ch != '\t')
        {
            if(!inWord)
            {
                words++;
                inWord = true;
            }
        }
        else
            inWord = false;
    }

    cout << "Characters = " << characters << endl;
    cout << "Words = " << words << endl;
    cout << "Lines = " << lines << endl;

    return 0;
}