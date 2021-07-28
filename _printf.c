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
	int i, j, k = 0;
	char join[1870] = "";
	int (*pointer_f)(va_list, int, char *);

	place_holders place[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{NULL, NULL}};

	va_list parameters;

	va_start(parameters, format);

	for (i = 0; format[i] != '\0'; i++, j++)
	{
		k = 0;
		if (format[i] == '%')
		{
			while (k < 3)
			{
				if (place[k].type[0] == format[i + 1])
				{
					i++;
					pointer_f = place[k].f;
					j = pointer_f(parameters, j, join);
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
