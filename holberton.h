#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int print_c(va_list parameters, int j, char *join);
int print_s(va_list parameters, int j, char *join);
int print_p(va_list parameters, int j, char *join);
int print_d(va_list parameters, int j, char *join);
int print_i(va_list parameters, int j, char *join);

typedef struct placeHolders
{
	char *type;
	int (*f)(va_list, int, char *);
} place_holders;

#endif
