/**
 * _strlen - Returns the length of a string.
 *
 * @s: A pointer to the null-terminated string.
 *
 * Return: The length of the string.
 *
 * Description: This function counts the number of characters in the string
 * until it encounters the null terminator '\0'.
 */
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0') {
length++;
}

return length;
}
