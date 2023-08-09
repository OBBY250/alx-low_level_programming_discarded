#include <unistd.h>
#include <stdio.h>
/**
 * main - program that print without printf, put
 * Return: 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
