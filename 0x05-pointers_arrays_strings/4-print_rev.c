#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 *s: A pointer to the null-terminated string to be printed in reverse.
 *
 * Description: This function reverses the characters in the provided string
 * and then prints the reversed string followed by a new line.
 */
void print_rev(char *s)
{
  if (s == NULL)
    return;

  int length = 0;

  while (s[length] != '\0') {
    length++;
  }

  for (int i = length - 1; i >= 0; i--) {
    putchar(s[i]);
  }

  putchar('\n'); 
}
