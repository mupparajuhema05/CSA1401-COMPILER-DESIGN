#include <stdio.h>
#include <string.h>

int main()
{
    char a, b, c, op1, op2;

    printf("Enter expression (e.g. a+b*c): ");
    scanf("%c%c%c%c%c", &a, &op1, &b, &op2, &c);

    printf("\nThree Address Code:\n");
    printf("t1 = %c %c %c\n", b, op2, c);
    printf("t2 = %c %c t1\n", a, op1);
    printf("Result = t2\n");

    return 0;
}