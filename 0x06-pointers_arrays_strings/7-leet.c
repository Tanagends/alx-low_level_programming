/**
 * leet - encodes a string  
 * @s: string to be converted.
 * Return: encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char *leetStr = str;

	for (i = 0; i < strlen(str); i++)
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
	return leetStr;
}
