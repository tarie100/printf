#include"main.h"
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * format_dbl - precision for non-custom conversion specifiers
 * @a: precision 1
 * @precision: precision 2
 * @str: output sting
 */
void format_dbl(double a, int precision, char *str)
{
	(void) precision;
	sprintf(str, "%.2f", a);
}
/**
 * _putchar - outputs the precision
 * Return: 0
 */
int _putchar(void)
{
	double a = 3.14159;
	int precision = 2;
	char str[20];

	format_dbl(a, precision, str);
	printf("%s", str);
	return (0);
}
