#include <iostream>
using namespace std;

int main()
{
    char op;

    cout << "Enter an operator: ";
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/')
        cout << "Valid Arithmetic Operator";
    else
        cout << "Invalid Operator";

    return 0;
}