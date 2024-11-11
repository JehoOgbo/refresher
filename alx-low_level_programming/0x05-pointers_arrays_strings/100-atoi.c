#include "main.h"
#include <stdio.h>


/**
 * _pow - raises a number to a power
 *
 * @num: number which is to be raised
 * @exp: the power or exponent
 *
 * Return: the value of the operation
 */
int _pow(int num, int exp)
{
	int save;

	if (exp == 0)
		return (1);

	save = num;

	while (exp > 1)
	{
		num = num * save;
		exp--;
	}
	return (num);
}

/**
 * _atoi - converts a string into an integer
 *
 * Description:
 * The number can be preceeded by infinite no. of characters
 * You need to take into account all the - and + signs bfore the no.
 * Do not use long, array or hardcode values
 *
 * @s: the string which is to be converted
 *
 * Return: return the integer
 */
int _atoi(char *s)
{
	int new, calc;
	int i, count, check1, check2;

	/* loop through the  string until you reach - or numeral */
	for (i = 0, count = 0, check1 = -1; s[i] != '\0'; i++)
	{
		/* count the minus signs */
		if (s[i] == '-')
		{
			count++;
		}
		/* know when you come across the first numeral record index */
		if ((s[i] >= 48 && s[i] <= 57) && check1 == -1)
		{
			check1 = i;
		}
		/* know when you come across the last numeral */
		if (s[i] > 47 && s[i] < 58 && (s[i + 1] < 48 || s[i + 1] > 57 || !s[i + 1]))
		{
			check2 = i;
			break;
		}
	}


	/* convert the first number portion to an integer */
	calc = check2 - check1;
	new = 0;
	while (check1 <= check2)
	{
		new += (s[check1] - 48) * _pow(10, calc);
		calc--;
		check1++;
	}
	/* if the number of minus signs is odd, do integer * - */
	if (count % 2)
		new = new * -1;
	/* return the integer */
	return (new);
}
