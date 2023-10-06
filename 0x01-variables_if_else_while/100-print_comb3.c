#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 *              two digits in ascending order, separated by ", ".
 *              Combinations like "01" and "10" are considered the same.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int firstDigit, secondDigit;

for (firstDigit = 0; firstDigit <= 8; firstDigit++)
{
for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');

if (firstDigit < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
