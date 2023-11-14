#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<limits.h>

int _putchar(char c);
char *rot13(char *str);
int prntf_strlen(const char *str);
int prntf_string(char *str);
int prntf_binary(unsigned int num);
int prntf_id(int a);
void spec_format(va_list argument, char spec, int *i);
int _printf(const char *format, ...);

#endif
