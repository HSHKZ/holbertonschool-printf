#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);
int handle_specifier(char specifier, va_list args);
void print_number(long int n, int *count);

#endif
