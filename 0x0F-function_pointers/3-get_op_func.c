#include <stdlib.h>
/**
 * get_op_func - gets the right operational function.
 * @s: the arithmetic operator.
 * Return: pointer to the right function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (op_t ops[i][0] == s)
			return (int (*(op_t ops[i][1]))(int, int));
	}
	return (NULL);
}

