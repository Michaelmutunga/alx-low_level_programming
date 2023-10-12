#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
int spaces, i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
