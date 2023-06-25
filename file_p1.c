#include"main.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * _printf -  produces output according to a format.
 * @format: character string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int a;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return;
	}
	a = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case ('c'):
					a += printf("%c", va_arg(args, int));
					break;
				case ('s'):
					    a += printf("%s", va_arg(args, char *));
					break;
				case ('%'):
					    a += printf("%%");
					break;
				default:
					    a += printf("?");
			}
		}
		else
		{
			a += printf("%c", *format);
		}
		format++;
	}
	va_end(args);
	return (a);
}
