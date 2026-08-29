#include <stdio.h>

struct symbol
{
    char name[20], type[20];
};

int main()
{
    struct symbol s[10];
    int n, i;

    printf("Enter number of symbols: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter Name and Type: ");
        scanf("%s %s", s[i].name, s[i].type);
    }

    printf("\nSymbol Table\n");
    printf("Name\tType\n");

    for(i = 0; i < n; i++)
        printf("%s\t%s\n", s[i].name, s[i].type);

    return 0;
}