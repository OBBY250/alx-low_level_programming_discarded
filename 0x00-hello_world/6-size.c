#include <stdio.h>
/**
 * main - this program prints the size of various types of data
 * Return: 0 (success)
 */
int main(void)
{
	printf("The size of an int is %zu bytes\n", sizeof(int));
	printf("The size of a float is %zu bytes\n", sizeof(float));
	printf("The size of a long long int is %zu bytes\n", sizeof(long long int));
	printf("The size of a char is %zu bytes\n", sizeof(char));
	printf("The size of a long int is %zu bytes\n", sizeof(long int));

	return 0;
}
