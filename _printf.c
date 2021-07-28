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
	va_list parameters;
	place_holders place[] = {
	    {"c", print_c}, {"s", print_s}, {"%", print_p}};

	va_start(parameters, format);

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
					j = pointer_f(parameters, j, join);
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
	va_end(parameters);
	write(1, join, j);
	return (j);
}
