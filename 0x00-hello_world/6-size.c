#include <stdio.h>
/**
 * main - this program prints the size of various types of data
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	float b;
	long long int c;
	char d;
	long int f;

printf("The size of an int is %lu byte(s)\n", (unsigned long)sizeof(a));
printf("The size of a float is %lu byte(s)\n", (unsigned long)sizeof(b));
printf("The size of a long long int is %lu byte(s)\n", (unsigned long)sizeof(c));
printf("The size of a char is %lu byte(s)\n", (unsigned long)sizeof(d));
printf("The size of a long int is %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
