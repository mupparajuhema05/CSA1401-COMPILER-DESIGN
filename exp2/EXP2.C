#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];

    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);

    if (strncmp(str, "//", 2) == 0)
    {
        printf("It is a single-line comment.\n");
    }
    else if (strncmp(str, "/*", 2) == 0 && strstr(str, "*/") != NULL)
    {
        printf("It is a multi-line comment.\n");
    }
    else
    {
        printf("It is not a comment.\n");
    }

    printf("\nPress any key to continue...");
    getchar();

    return 0;
}