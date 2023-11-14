#include "main.h"

/**
 * prntf_search - search for func
 * @next: char
 * @position: position of char
 * Return: match
**/

int (*prntf_search(const char *next, int position))(va_list)

{

int i;

sp_t opt[] = { 
	{"s", prntf_string},
	{"c", prntf_char},
	{"d", prntf_int},
	{"i", prntf_int},
	{"b", prntf_binary},
	{NULL, NULL}
};

for (i = 0; opt[i].m != NULL; i++) 
	if (opt[i].m[0] == next[position])
		return (opt[i].func);
return NULL;
}
