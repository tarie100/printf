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
	int i, d = 0; /** Initialize i, d, to 0 **/

	va_start(handle, format);

	if (format == NULL)
	{
		return;
	}
	while (*format != '\0')
	{
		if (*format == 'd')
		{
			d = va_arg(handle, int);
			printf("%d\n", d);
		}
		if (*format == 'i')
		{
			i = va_arg(handle, int);
			printf("%i\n", i);
		}
		++format;
	}

	va_end(handle);
}
