#include <stdio.h>

int main()
{
    printf("Original Grammar:\n");
    printf("S -> (L) | a\n");
    printf("L -> L,S | S\n\n");

    printf("Grammar after eliminating Left Recursion:\n");
    printf("S -> (L) | a\n");
    printf("L -> SR\n");
    printf("R -> ,SR | e\n");

    return 0;
}