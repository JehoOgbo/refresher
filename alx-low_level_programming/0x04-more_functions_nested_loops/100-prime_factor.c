
#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int divisor = 2;
	long int num = 612852475143;

	while (num > 1)
	{
		if (num % divisor == 0)
			num /= divisor;
		else if (divisor > sqrt(num))
		{
			printf("%ld\n", num);
			return (0);
		}
		else
			divisor += 1;
	}

	return (0);
}
