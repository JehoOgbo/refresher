#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * Description: 43071 for aeotl respectively
 * You can only use one if in the code
 *
 * @str: the string which is to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i, j;

	char capital[] = {'A', 'E', 'T', 'O', 'L'};
	char small[] = {'a', 'e', 't', 'o', 'l'};
	char encode[] = {'4', '3', '7', '0', '1'};

	for(i = 0; str[i]; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(str[i] == capital[j] || str[i] == small[j])
				str[i] = encode[j];
		}
	}

	return (str);
}
