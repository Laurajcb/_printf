#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	printf("%d\n", len2);
	_printf("C[%%][%c][%c][%c]\n", 'H', 'L', 'H', 'L');
	_printf("Let's try to printf a %%simple sentence.\n");
	_printf("%d\n", 1024);
	_printf("hola %d prueba\n", 500);
	_printf("Negative:[%d]\n", -762534);
	_printf("%d\n", 0);
	_printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);

	return (0);
}
