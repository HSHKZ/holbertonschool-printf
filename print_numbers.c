#include "main.h"
#include <limits.h>
#include <stdarg.h>

/**
 * print_number - Recursively prints a number
 * @n: Number to print
 * @count: Incrementation of the size
 */
void print_number(long int n, int *count)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		(*count)++;
	}

	if (n / 10)
		print_number(n / 10, count);

	_putchar(n % 10 + '0');
	(*count)++;
}

/**
 * print_int - Prints an integer
 * @args: Arguments list
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	long int n = va_arg(args, int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	print_number(n, &count);
	return (count);
}
