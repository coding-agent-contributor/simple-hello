#include <stdio.h>
#include <string.h>

int main()
{
    char name[64];

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s\n", name);

    return 0;
}
