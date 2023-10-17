#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 *
 * s: A pointer to the null-terminated string to be reversed.
 *
 * Description: This function reverses the characters in the provided string in place.
 */
void rev_string(char *s)
{
  if (s == NULL)
    return; 

  int length = 0;
  char *start = s;
  char *end = s;

  
  while (*end != '\0') {
    end++;
    length++;
  }

  
  end--; 

  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}
