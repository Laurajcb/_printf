#include <stdio.h>
#include "holberton.h"
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len);

	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Character:[%c]\n", "H");

	printf("Character:[%c]\n", "H");

	_printf("String:[%    s]\n", "I am a string !");
	printf("String:[%    s]\n", "I am a string !");

	_printf("String:[%s]\n", NULL);
	printf("String:[%s]\n", NULL);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
