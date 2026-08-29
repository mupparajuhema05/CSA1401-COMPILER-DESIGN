#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int chars = 0, words = 0, lines = 1, inWord = 0, i;

    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
            chars++;

        if(isspace(str[i]))
            inWord = 0;
        else if(!inWord)
        {
            inWord = 1;
            words++;
        }
    }

    printf("Characters = %d\n", chars);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}