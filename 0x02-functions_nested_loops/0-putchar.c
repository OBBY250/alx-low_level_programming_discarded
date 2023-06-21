#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: Always 0 (success)
 */

int main(void)
{
	char myVar[] = "_putchar";
	int i = 0;

	while (myVar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
