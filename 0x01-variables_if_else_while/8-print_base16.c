#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
char hex[] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
putchar(hex[i]);
putchar('\n');
return (0);
}

