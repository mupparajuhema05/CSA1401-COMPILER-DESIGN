#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[500];
    int i = 0, j = 0;
    int in_comment = 0;

    printf("Enter a line:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '/' && str[i + 1] == '/')
            break;

        if (str[i] == '/' && str[i + 1] == '*')
        {
            in_comment = 1;
            i += 2;
            continue;
        }

        if (in_comment)
        {
            if (str[i] == '*' && str[i + 1] == '/')
            {
                in_comment = 0;
                i += 2;
            }
            else
                i++;
            continue;
        }

        if (!isspace(str[i]))
            str[j++] = str[i];

        i++;
    }

    str[j] = '\0';

    printf("After removing spaces and comments:\n");
    printf("%s\n", str);

    return 0;
}