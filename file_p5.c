#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _string - prints string
 * @ps: string to print
 *
 * Return: char printed
 */

int _string(char *ps)
{
	int a = 0;

	if (ps == NULL)
	{
		ps = "(null)";
	}

	while (ps[a] != '\0')
	{
		write(1, &ps[a], 1);
		a++;
	}
	return (a);
}
