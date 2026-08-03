#include <stdio.h>

int main()
{
    char a, b, c, op;

    printf("Enter expression (e.g. a+b): ");
    scanf("%c%c%c", &a, &op, &b);

    printf("\nTarget Code:\n");
    printf("MOV R0,%c\n", a);

    switch(op)
    {
        case '+': printf("ADD R0,%c\n", b); break;
        case '-': printf("SUB R0,%c\n", b); break;
        case '*': printf("MUL R0,%c\n", b); break;
        case '/': printf("DIV R0,%c\n", b); break;
        default: printf("Invalid Operator\n");
    }

    printf("MOV %c,R0\n", c);

    return 0;
}