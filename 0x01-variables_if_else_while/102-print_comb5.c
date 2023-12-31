#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two
 *              two-digit numbers in ascending order, separated by a comma
 *              and a space.
 *              Combinations like "00 01" and "01 00" are considered the same.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
if (num1 != num2)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
