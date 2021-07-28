#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_c- function that fills place holders with string
 * @parameters:takes the parameter of va_arg
 * @join: is the buffer (takes temporal value)
 * @j: is the position where will be replace the va_arg
 * Return:j the actual position .
 */
int print_c(va_list parameters, int j, char *join)
{
	join[j] = va_arg(parameters, int);
	return (j);
}
/**
 * print_p- function that fills place holders with string
 * @parameters: takes the parameter of va_arg
 * @join: is the buffer (takes temporal value)
 * @j: is the position where will be replace the va_arg
 * Return:j the actual position
 */
int print_p(va_list parameters, int j, char *join)
{
	parameters = parameters;
	join[j] = '%';

	return (j);
}
/**
 * print_s-function that fills place holders with string
 * @parameters: takes the parameter of va_arg
 * @join: is the buffer (takes temporal value)
 * @j: is the position where will be replace the va_arg
 * Return:j the actual position .
 */
int print_s(va_list parameters, int j, char *join)
{
	int x = 0;
	int c = 0;
	char *str = "";
	char *null_var = "(null)";

	str = va_arg(parameters, char *);

	if (str == NULL)
	{
		for (c = 0; null_var[c] != '\0'; c++)
		{
			join[j] = null_var[c];
			j++;
		}
	}
	else
		for (x = 0; str[x] != '\0'; x++)
		{
			join[j] = str[x];
			j++;
		}
	return (j - 1);
}
