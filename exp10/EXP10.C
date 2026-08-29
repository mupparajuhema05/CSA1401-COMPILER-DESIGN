#include <stdio.h>

int main()
{
    printf("Original Grammar:\n");
    printf("S -> iEtS | iEtSeS | a\n");
    printf("E -> b\n\n");

    printf("Grammar after Left Factoring:\n");
    printf("S -> iEtSA | a\n");
    printf("A -> eS | e\n");
    printf("E -> b\n");

    return 0;
}