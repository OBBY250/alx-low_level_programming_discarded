#include <stdio.h>

/**
 * main - alpahebet
 * Return: 0 (success)
 */

int main(void)
{
	int i = 'a';

	for ( ; i <= 'z'; )
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

