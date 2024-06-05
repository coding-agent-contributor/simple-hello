#include <stdio.h>

int main()
{
    char name[64];

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}