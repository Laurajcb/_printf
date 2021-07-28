#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - function
 * @format: pointer to array
 * Return: 1.
 */
int _printf(const char *format, ...)
{
	int i, j = 0, k = 0;
	char join[2048] = "";
	int (*pointer_f)(va_list, int, char *);
	va_list args;

	place_holders place[] = {
	    {"c", print_c}, {"s", print_s}, {"%", print_p}};

	va_start(args, format);

	if (args == NULL || format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++, j++, k = 0)
	{
		if (format[i] == '%')
		{
			while (k <= 3)
			{
				if (k == 3)
					join[j] = '%';
				if (k < 3 && place[k].type[0] == format[i + 1])
				{
					i++;
					pointer_f = place[k].f;
					j = pointer_f(args, j, join);
					break;
				}
				k++;
			}
		}
		else
		{
			join[j] = format[i];
		}
	}
	va_end(args);
	write(1, join, j);
	return (j);
}
