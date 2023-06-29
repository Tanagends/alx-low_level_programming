/**
 * reverse_array - reverses array
 * @a: array.
 * @n: number of array elements.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	char temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
