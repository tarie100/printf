#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _handle - handling conversion specifiers
 * @format: string
 *
 * Return: integers printed
 */

int _handle(const char *format, ...)
{
	va_list args;
	int a = 0;
	int value;
	int length;
	char c;
	char buffer[20];

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			value = va_arg(args, int);
			length = snprintf(buffer, sizeof(buffer), "%d\n", value);
			write(1, buffer, length);
			format += 2;
			a++;
		}
		else
		{
			c = *format;
			write(1, &c, 1);
		}
		format++;
	}

	va_end(args);
	return (a);
}
