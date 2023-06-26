#include"main.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * _handle - handling conversion specifiers
 * @format: string
 *
 * Return: integers printed
 */

void _handle(const char *format, ...)
{
	va_list handle;
	int i, c = 0; /** Initialize i, c, to 0 **/
	double d = 0;

	va_start(handle, format);

	if (format == NULL)
	{
		return;
	}
	while (*format != '\0')
	{
		if (*format == 'd')
		{
			i = va_arg(handle, int);
			printf("%d\n", i);
		} else if (*format == 'c')
		{
			c = va_arg(handle, int);
			printf("%c\n", c);
		} else if (*format == 'f')
		{
			d = va_arg(handle, double);
			printf("%f\n", d);
		}
		++format;
	}

	va_end(handle);
}
