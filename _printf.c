#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
    int i = 0;
    int p = 0; 
    int j = 0;
    char join[1024] = "";

    va_list parameters;
    va_start (parameters, format);

    for(i = 0; format[i] != '\0'; i++, j++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
            {
                join[j] = va_arg(parameters, int);
                i++;
            }
            else if (format[i + 1] == '%')
            {
                join[j] = '%';
                i++;
            }
            else if (format[i + 1] == 's')
            {
                j = f_strings(va_arg(parameters, char *), join, j);
                i++;
            }
            else
            {
                join[j]= format[i];
            }
        }
        else
        {
            join[j] = format[i];
        }
    }
    write(1, join, j);
}
int main(void)
{
    _printf("Char[%%][%c][%c][%c]\n", 'H', 'L', 'H', 'L');
    _printf("Let's try to printf a %%simple sentence.\n");
    _printf("Unknown:[%r]\n");
    _printf("String:[%s]\n", "I am a string !");
}
