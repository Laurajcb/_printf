#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int print_c(va_list parameters, int j, char *join);
int print_s(va_list parameters, int j, char *join);
int print_p(va_list parameters, int j, char *join);
int print_n(va_list parameters, int j, char *join);
/**
 *  struct placeHolders- typedef struct
 * @type:type of place holders
 * @f:pointer to funtion
 **/
typedef struct placeHolders
{
	char *type;
	int (*f)(va_list, int, char *);
} place_holders;

#endif
