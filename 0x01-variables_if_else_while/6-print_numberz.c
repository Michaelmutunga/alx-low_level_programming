#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single-digit numbers in base 10
 *              starting from 0, followed by a new line, using only putchar.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + 48);
number++;
}

putchar('\n');

return (0);
}
