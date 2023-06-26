#include"main.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * _handle - handling conversion specifiers
 * @format: string
 *
 * Return: integers printed
 */

int _handle(const char *format, ...)
{
	va_list args;
	int handle = 0;
	int value;

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
			printf("%d\n", value);
			format += 2;
			handle++;
		}
		else
		{
			format++;
		}
	}

	va_end(args);
	return (handle);
}
