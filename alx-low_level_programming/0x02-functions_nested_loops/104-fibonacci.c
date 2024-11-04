#include <stdio.h>

/**
 * print_sum - prints a number digit by digit
 *
 * Description: Recursive function to print a number
 * @sum: the number to be printed
 *
 * Return: void
 */
void print_sum(__int128_t sum)
{
	if (sum == 0)
		return;

	print_sum(sum / 10);
	putchar(sum % 10 + 48);
}


/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	__int128_t sum, firstnum, secnum;
	int count;

	firstnum = 1;
	secnum = 2;

	printf("1, 2, ");
	for (count = 0; count < 96; count++)
	{
		sum = firstnum + secnum;
		/* printf cannot handle __int128_t to my knowledge */
		/* Therefore, this is printed recursively */
		print_sum(sum);
		printf(", ");
		firstnum = secnum;
		secnum = sum;
	}
	print_sum(firstnum + secnum);
	putchar('\n');

	return (0);
}
