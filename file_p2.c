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
	va_list handle;
	int y = 0; /** Initialize y to 0 **/

	va_start(handle, format);

	if (format == NULL)
	{
		return (1);
	}
	if (*format == '%')
	{
		++format;
		switch (*format)
		{
			case ('d'):
				y += printf("%d", va_arg(handle, int));
				break;
			case ('i'):
				y += printf("%i", va_arg(handle, int));
				break;
			default:
				y += printf("?");
				break;
		}
	}
	else
	{
		y += printf("%d", *format);
	}

	va_end(handle);
	return (y);
}
