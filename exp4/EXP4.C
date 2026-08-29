#include <stdio.h>

int main()
{
    char op;

    printf("Enter an operator: ");
    scanf(" %c", &op);

    if (op == '+' || op == '-' || op == '*' || op == '/')
        printf("Valid Arithmetic Operator\n");
    else
        printf("Invalid Arithmetic Operator\n");

    return 0;
}