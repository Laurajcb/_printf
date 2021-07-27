#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * f_strings- function that fills place holders with string 
 * 
 * Return:j the actual position .
 */
int f_strings(char *str, char *join, int j)
{
    int x = 0;

    for (x = 0; str[x] != '\0'; x++)
    {
        join[j] = str[x];
        j++;
    }
    return(j);
}
