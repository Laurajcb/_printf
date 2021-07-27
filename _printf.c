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
	int i, j = 0, flag = 0;
	char join[1024] = "";
	va_list parameters;

	if (format == NULL)
		return (0);

	va_start(parameters, format);

	for (i = 0; format[i] != '\0'; i++, j++, flag = 0)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			join[j] = va_arg(parameters, int);
			flag = 1;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			j = f_strings(va_arg(parameters, char *), join, j);
			flag = 1;
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			join[j] = '%';
			flag = 1;
		}
		if (flag == 1)
		{
			i++;
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
