#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>

/**
 * struct spec - structure
 * @m: string
 * @func: function
 */

typedef struct spec
{
	char *m;
	int (*func)(va_list);
}
sp_t;

int _putchar(char c);
int _printf(const char *format, ...);
int prntf_char(va_list argument);
int prntf_string(va_list argument);
int (*prntf_search(const char *next, int position))(va_list);
int prntf_binary(va_list b);
int prntf_int(va_list args);

#endif
