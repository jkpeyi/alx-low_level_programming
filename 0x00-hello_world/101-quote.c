
#include <unistd.h>


/**
 * main - Prints a string to the standard error
 *
 * Return:  1 (Success)
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i = 0;

while (s[i])
{
if (write(2, &s[i], 1) == -1)
return (1);
i++;
}
return (1);
}
