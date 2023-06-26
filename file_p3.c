#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_binary - prints binary
 * @n: integer
 *
 * Return: Nothing
 */

void print_binary(unsigned int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	printf("%u", n % 2);
}

/**
 * custom_printf - handles custom specifier
 * @format: string
 *
 * Return: binary
 */

void custom_printf(const char *format, ...)
{
	va_list args;
	unsigned int value;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				value = va_arg(args, unsigned int);
				print_binary(value);
			} else
			{
				putchar('%');
				putchar(*format);
			}
		} else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}
