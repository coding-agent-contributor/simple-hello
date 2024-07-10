#include <stdio.h>
#include <string.h>

// This is the main function of the program.
int main()
{
    char name[8];

    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character if present
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s\n", name);

    return 0;
}
