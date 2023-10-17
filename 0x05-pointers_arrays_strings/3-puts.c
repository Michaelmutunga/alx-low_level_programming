#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * str: A pointer to the null-terminated string to be printed.
 *
 * Description: This function prints the characters in the provided string
 * until it reaches the null terminator '\0', and then adds a new line.
 */
void _puts(char *str)
{
while (*str != '\0') {
putchar(*str);
str++;
}

putchar('\n');
}
