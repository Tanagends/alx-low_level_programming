#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * leet - encodes a string 
 * @s: string to be converted.
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *leetStr = str;
	int k = strlen(str);

	for (i = 0; i < k; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (toupper(str[i]) == "AEOTL"[j])
			{
				leetStr[i] = "43071"[j];
				break;
			}
		}
	}
	return (leetStr);
}
