#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	long int n1;
	long int n2;
	long int bc;
	long int abc;

	n1 = 1;
	n2 = 2;
	bc = abc = 0;
	while (bc <= 4000000)
	{
		bc = n1 + n2;
		n1 = n2;
		n2 = bc;
		if ((n1 % 2) == 0)
		{
			abc += n1;
		}
	}
	printf("%ld\n", abc);
	return (0);
}
