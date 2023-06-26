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

	if (!*format)
	{
		return (-1);
	}

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == 'd')
		{
			/** Handle integer conversion specifier '%d' **/
			value = va_arg(args, int);
			printf("%d\n", value);
			/** Increment the format pointer to skip the conversion specifier **/
			format += 2;
			++handle;
		}
		else if (*format == '%' && *(format + 1) == 'i')
		{
			/** Handle integer conversion specifier '%i' **/
			value = va_arg(args, int);
			printf("%d\n", value);
			/** Increment the format pointer to skip the conversion specifier **/
			format += 2;
			++handle;
		}
		else
		{
			/** Print any non-conversion specifier characters as is **/
			putchar(*format);
			++format;
		}
	}

	va_end(args);
	return (handle);
}
