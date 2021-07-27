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
	int i = 0;
	int j = 0;
	char join[1024] = "";

	va_list parametros;

	va_start(parametros, format);

	for (i = 0; format[i] != '\0'; i++, j++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				join[j] = va_arg(parametros, int);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				join[j] = '%';
				i++;
			}
			else if (format[i + 1] == 's')
			{
				j = f_strings(va_arg(parametros, char *), join, j);
				i++;
			}
			else
			{
				join[j] = format[i];
			}
		}
		else
		{
			join[j] = format[i];
		}
	}
	write(1, join, j);
	return (0);
}

