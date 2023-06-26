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
	va_list args;
	int handle;

	va_start(args, format);

	if (!*format)
	{
		return;
	}

	while (*format != '\0')
	{
		handle = va_arg(args, int);
		printf("%d\n", handle);
	}
	++format;

	va_end(args);
}
