#include"main.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * _handle - handling conversion specifiers
 * @format: string
 *
 * Return: integers printed
 */

void _handle(int count, ...)
{
	va_list args;
	int i;
	int handle;
	
	va_start(args, count);

	if (!count)
	{
		return;
	}

	for (i = 0; i < count; ++i)
	{
		handle = va_arg(args, int);
		printf("%d ", handle);
	}

	va_end(args);
	printf("\n");
}
