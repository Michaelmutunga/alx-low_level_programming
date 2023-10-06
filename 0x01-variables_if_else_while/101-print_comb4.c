#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 *              three digits in ascending order, separated by ", ".
 *              Combinations like "012," "120," "102," "021," "201," and "210"
 *              are considered the same.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int firstDigit, secondDigit, thirdDigit;

for (firstDigit = 0; firstDigit <= 7; firstDigit++)
{
for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
{
for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
putchar(thirdDigit + '0');

if (firstDigit < 7)
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
