#include "main.h"

/**
 * prntf_binary - converts decimal to binary
 * @n: argument
 * Return: count
 */

int prntf_binary(unsigned int n)

{
 int count = 0; 
 int binary[64]; /* Assuming a 64 bit system */
 int i = 0;
 int j;

if (n == 0)
{
_putchar('0');
_putchar('\n');
return 1;
}

while (n > 0)
{
binary[i] = n % 2;
n /= 2;
i++;
}

for (j = i - 1; j >= 0; j--)
{
_putchar('0' + binary[j]);
count++;
}

_putchar('\n');

return count;
}
