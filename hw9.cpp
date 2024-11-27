#include <stdio.h>

int convCase(int ch)
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void)
{
    char str[100];
    printf("Input> ");
    fgets(str, sizeof(str), stdin);

    printf("Output> ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        putchar(convCase(str[i]));
    }
    printf("\n");
    return 0;
}

