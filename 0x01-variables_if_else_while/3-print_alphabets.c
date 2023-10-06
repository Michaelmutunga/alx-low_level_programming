#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and a newline.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}
