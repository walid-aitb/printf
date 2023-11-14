#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<limits.h>

int _putchar(char c);
int prntf_string(char *str);
void spec_format(va_list argument, char spec, int *i);
int _printf(const char *format, ...);
int prntf_binary(unsigned int num);
int _strlen(const char *str);
int prntf_id(int a);
char *rot13(char *str);

#endif
