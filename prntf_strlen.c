#include "main.h"

/**
 * _strlen - Generates length of string.
 * @str: argument.
 * Return: length.
 */

int _strlen(const char *str)
{
  int len = 0;

while (str[len] != '\0')
len++;  
return len;
}
