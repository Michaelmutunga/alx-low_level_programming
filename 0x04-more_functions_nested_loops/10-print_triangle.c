#include "main.h"
/**
 *print_triangle -Prints a triangle of specified size using '#'.
 *size: The size of the triangle.
 */
void print_triangle(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size - row - 1; column++)
_putchar(' ');
for (column = 0; column < row + 1; column++)
_putchar('#');
_putchar('\n');
}
}
}
