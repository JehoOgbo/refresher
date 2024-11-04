#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Description: 1024 is excluded
 *
 * Return: 0
 */
int main(void)
{
	int number, sum;

	for (number = 3, sum = 0; number < 1024; number++)
	{
		if (!(number % 3) || !(number % 5))
		{
			sum += number;
		}
	}
	printf("%d\n", sum);

	return (0);
}
