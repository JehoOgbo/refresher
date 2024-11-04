#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers below 4 million
 *
 * Return: 0
 */
int main(void)
{
	long int sum, firstnum, secnum, count;

	firstnum = 1;
	secnum = 2;

	for (sum = 0, count = 0; sum < 4000000;)
	{
		sum = firstnum + secnum;
		if (sum % 2 == 0)
			count += sum;

		firstnum = secnum;
		secnum = sum;
	}
	printf("%ld\n", count);

	return (0);
}
