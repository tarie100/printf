#include<stdarg.h>
#include"main.h"
#include<stdlib.h>
#include<ctype.h>
/**
 * _precision - returns the precision for printing
 * @format: string
 * @i: arguments to be printed.
 * @args: arguments.
 * Return: Precision.
 */
int _precision(const char *format, int *i, va_list args)
{
	int prec = -1;
	int ci = *i + 1;

	if (format[ci] != '.')
		return (prec);

	prec = 0;
	for (ci += 1; format[ci] != '\0'; ci++)
	{
		if (isxdigit(format[ci]))
		{
			prec *= 10;
			prec += format[ci] - '0';
		}
		else if (format[ci] == '*')
		{
			ci++;
			prec = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = ci - 1;

	return (prec);
}
