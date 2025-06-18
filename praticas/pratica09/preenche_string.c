#include <stdio.h>
#include <string.h>

int main()
{
    char string[11];
    memset(string, '\0', sizeof(string));

    char tecla;
    scanf("%c", &tecla);
    memset(string, tecla, 10);
    printf("%s\n", string);
    memset(string, '*', 5);

    return 0;
}