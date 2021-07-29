# Welcome !

What you going to find in this repository is a rebuild of the standard printf function in C. Our project required a function capable of printing with the %d, %c, %s, , %i and %% specifiers to standard output. printf returns the number of characters printed (excluding the null byte at the end of strings). For this project was no necessary  to handle flag characters, field width, precision, or length.


# Objetive
The  **_printf()**  function produce output according to a  _format_  as described below. Also, write output to  _stdout_, the standard output stream.

The  **_printf()**  function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of  _**stdarg(3)**_  are converted for output.

The format string is a character string, beginning and ending inits initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character % and ends with conversion specifier.

#  Requirements
General
-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the  `_putchar`  function for this project


# Files

Readme.md
_printf.c
funtions.c
holberton.h
man_3_printf.md


## Format Specifiers

Our team chose to add  `%c`,  `%s`,  `%%`,  `%d`,  `%i`,   formatting. We relied on the library we have been building at Holberton as well as new concepts gathered during this project.

## Compilation

Our code can be compiled in either example

```
$ gcc -Wall -Werror -Wextra -pedantic *.c

```

or (if you want to test for unknown format specifiers)

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
```
Mapu@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
Mapu@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
Mapu@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
Mapu@ubuntu:~/c/printf$
```



### Examples


 -Character: printf("%c", 'A'); Output:: A

-String: printf("%s", 'This is a string.'); Output: This is a string.

 -Integer: printf("%i", 5); Output: 5


### Authors

Written by Laura Callejas and Maria Paula Medina, Cohort 15.