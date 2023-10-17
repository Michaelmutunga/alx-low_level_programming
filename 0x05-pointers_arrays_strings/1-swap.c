/**
 * swap_integers - Swaps the values of two integers.
 *
 * a: A pointer to the first integer.
 * b: A pointer to the second integer.
 *
 * Description: This function swaps the values of two integers by using
 * temporary variables.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
