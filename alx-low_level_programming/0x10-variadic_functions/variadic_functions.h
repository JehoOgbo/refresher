#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct aps - marker to functions and functions to handle printing
 *
 * @c: marker that specifies the kind of data
 * @f: function to be executed
 */
typedef struct aps
{
	char *c;
	void (*f)(va_list arg);
} aps_t;

#endif /* _VARIADIC_FUNCTIONS_H */
