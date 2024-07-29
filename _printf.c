#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - Produces output according to a format
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			count += handle_specifier(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}

/**
 * handle_specifier - Handles the specifiers for _printf
 * @specifier: Specifier character
 * @args: Arguments list
 * Return: Number of characters printed
 */
int handle_specifier(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(args);
	else if (specifier == 's')
		count += print_string(args);
	else if (specifier == 'd' || specifier == 'i')
		count += print_int(args);
	else if (specifier == '%')
	{
		_putchar('%');
		count++;
	}
	else
	{
		_putchar('%');
		_putchar(specifier);
		count += 2;
	}

	return (count);
}
