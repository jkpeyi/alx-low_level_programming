#include <unistd.h>
/**
 * main - prints 0 -10
 *
 * Return: 0
 **/
int main(void)
{
int i = 0;
while (i < 10)
{
write(1, &i, 1);
i++;
}
write(1, "\n", 1);
return (0);
}
