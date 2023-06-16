#include <stdio.h>
/**
 * main - this program prints the size of various types of data
 * Return: 0 (success)
 */
int main(void)
{
	printf("The size of an int is %lu bytes\n", (unsigned long)sizeof(int));
	printf("The size of a float is %lu bytes\n", (unsigned long)sizeof(float));
	printf("The size of a long long int is %lu bytes\n", (unsigned long)sizeof(long long int));
	printf("The size of a char is %lu bytes\n", (unsigned long)sizeof(char));
	printf("The size of a long int is %lu bytes\n", (unsigned long)sizeof(long int));

	return (0);
}
