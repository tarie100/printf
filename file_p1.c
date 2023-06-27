#include"main.h"
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdarg.h>
/**
 * _printf -  produces output according to a format.
 * @format: character string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int a;
	char b;
	va_list args;
	char *str;
	size_t length;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	a = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case ('c'):{
						   b = va_arg(args, int);
						   write(1, &b, 1);
						   ++a;
						   break;
					   }
				case ('s'):{
						   str = va_arg(args, char *);
						   length = strlen(str);
						   write(1, str, length);
						   a += length;
						   break;
					   }
				case ('%'):{
						   write(1, "%", 1);
						   ++a;
						   break;
					   }
				default:{
						break;
					}
			}
		}
		else
		{
			write(1, format, 1);
			++a;
		}
		format++;
	}
	va_end(args);
	return (a);
}
