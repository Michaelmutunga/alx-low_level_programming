#include <stdio.h>

void puts2(char *str) {
  if (str == NULL) {
    return;
  }

  for (int i = 0; str[i] != '\0'; i += 2) {
    putchar(str[i]);
  }

  putchar('\n');
}

int main() {
  char inputString[] = "Hello, World!";
  puts2(inputString);
  return 0;
}
