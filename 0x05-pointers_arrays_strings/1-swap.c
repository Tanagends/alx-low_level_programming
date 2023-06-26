/**
 * swap_int - swaps values of two integers.
 * @a: a pointer to to first int.
 * @b: a pointer to a second int.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
