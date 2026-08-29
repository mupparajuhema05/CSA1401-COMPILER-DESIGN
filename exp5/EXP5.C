#include <stdio.h>

int main()
{
    char ch;
    int n, i;
    int whitespace = 0, newline = 0;

    printf("Enter number of lines: ");
    scanf("%d", &n);
    getchar();

    printf("Enter text:\n");

    for (i = 0; i < n; i++)
    {
        while ((ch = getchar()) != '\n')
        {
            if (ch == ' ' || ch == '\t')
                whitespace++;
        }
        newline++;
    }

    printf("\nNumber of Whitespaces: %d\n", whitespace);
    printf("Number of Newlines: %d\n", newline);

    return 0;
}