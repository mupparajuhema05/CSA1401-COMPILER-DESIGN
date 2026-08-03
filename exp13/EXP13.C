#include <stdio.h>

char s[20];
int i = 0;

void E(), EP(), T();

void E()
{
    T();
    EP();
}

void EP()
{
    if (s[i] == '+')
    {
        i++;
        T();
        EP();
    }
}

void T()
{
    if (s[i] == 'i')
        i++;
}

int main()
{
    printf("Enter string: ");
    scanf("%s", s);

    E();

    if (s[i] == '\0')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}