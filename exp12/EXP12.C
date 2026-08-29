#include <stdio.h>
#include <string.h>

char s[20];
int i = 0;

void E(), EP(), T(), TP(), F();

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
    F();
    TP();
}

void TP()
{
    if (s[i] == '*')
    {
        i++;
        F();
        TP();
    }
}

void F()
{
    if (s[i] == 'i')   // i represents id
        i++;
    else if (s[i] == '(')
    {
        i++;
        E();
        if (s[i] == ')')
            i++;
    }
}

int main()
{
    printf("Enter expression: ");
    scanf("%s", s);

    E();

    if (s[i] == '\0')
        printf("Valid Expression");
    else
        printf("Invalid Expression");

    return 0;
}