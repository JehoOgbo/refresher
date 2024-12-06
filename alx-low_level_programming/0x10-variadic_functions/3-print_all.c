#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void op_char(va_list arg);
void op_int(va_list arg);
void op_float(va_list arg);
void op_string(va_list arg);

/**
 * print_all - prints anything that is a numeric or char data type
 * Description: Does not print numeric arrays but prints char arrays or strings
 *
 * @format: string showing the type of arguments being passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	int ensure;	/* used to ensure separator is not printed for last parameter */

	aps_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	ensure = 1;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].c)
		{
			if (format[i] == *ops[j].c)
			{
				ops[j].f(ap);
				format[i + 1] > 0 ? printf(", ") : ensure++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}

/**
 * op_char - prints a char
 *
 * @ap: pointer to char argument
 *
 * Return: void
 */
void op_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * op_int - prints an integer
 *
 * @ap: pointer to int argument
 *
 * Return: void
 */
void op_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * op_float - prints a float
 *
 * @ap: pointer to float argument
 *
 * Return: void
 */
void op_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * op_string - prints a string
 *
 * @ap: pointer to string argument
 *
 * Return: void
 */
void op_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(ap, char *));
}
