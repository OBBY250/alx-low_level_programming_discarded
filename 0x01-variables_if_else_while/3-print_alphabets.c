#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
