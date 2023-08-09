#include <unistd.h>
#include <stdio.h>
/**
 * main - program that print without printf, put
 * return: 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	putchar('\n');
	return (1);
}
