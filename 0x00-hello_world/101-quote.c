#include <unistd.h>
#include <stdio.h>
/**
 * main - program that print without printf, put
 * return: 0 (success)
 */
int main(void)
{
	char message[] = "and that piece of art is usefuli\" - Dora Korpar, 2015-10-19";

	write(1, message, sizeof(message));
	putchar('\n');
	return (0);
}
