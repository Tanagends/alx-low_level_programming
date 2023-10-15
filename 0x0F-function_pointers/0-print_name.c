#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: the name.
 * @f: function printing a name in a certain way.
 */
void print_name(char *name, void (*f)(char *))
{
	/*if (name == NULL || f == NULL)*/
		/*return;*/
	f(name);
}
