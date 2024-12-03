#include "main.h"

/**
 * _pow - raises a number to a power
 *
 * @num: number which is to be raised
 * @exp: the power or exponent
 *
 * Return: the value of the operation
 */
__int128_t _pow(__int128_t num, int exp)
{
	__int128_t save;

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
 * You need to take into account all the - and + signs before the no.
 * Do not use long, array or hardcode values
 *
 * @s: the string which is to be converted
 *
 * Return: return the integer
 */
__int128_t _atoi(char *s)
{
	__int128_t new, calc;
	__int128_t i, count, check1, check2;

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

/**
 * num_to_str - converts a number to a string
 *
 * @num: number to be converted to string
 *
 * Return: string that reads the number
 */
char *num_to_str(__int128_t num, char *str, int size_r)
{
	char temp;
	int i, j, k;

	i = 0;
	/* extract digits from the num and add them to str */
	/* Note: this happens in reverse */
	while (num > 0 && i > size_r)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}

	/* add terminating null byte */
	str[i] = '\0';
	/* reverse the contents of the string */
	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		temp = str[j];
		str[j] = str[k];
		str[k] = temp;
	}

	return (str);
}

/**
 * infinite_add - adds two numbers even those which are very long
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	__int128_t first;
	__int128_t second;

	/* convert the first number to a numeric data type __int128_t */
	first = _atoi(n1);

	/* convert the second number in the same way */
	second = _atoi(n2);
	/* add them */
	/* convert the result back to char */
	/* return the result */

	return(num_to_str(first + second, r, size_r));
}
