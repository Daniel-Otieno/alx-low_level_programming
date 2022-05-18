#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: This is a string between numbers
 * @n: number of parameters passed in the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
