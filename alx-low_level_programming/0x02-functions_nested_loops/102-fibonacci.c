#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int sum, firstnum, secnum;
	int count;

	firstnum = 1;
	secnum = 2;

	printf("1, 2, ");
	for (count = 0; count < 48; count++)
	{
		/* sum gets and prints the next number in the sequence */
		/* e.g 3 + 5 = 8 */
		sum = firstnum + secnum;
		printf("%ld, ", sum);
		/* for instance 3, 5. 3 becomes 5, 5 becomes 8 */
		firstnum = secnum;
		secnum = sum;
	}
	printf("%ld\n", firstnum + secnum);

	return (0);
}
