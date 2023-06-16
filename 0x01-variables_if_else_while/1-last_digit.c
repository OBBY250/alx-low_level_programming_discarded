File Edit Options Buffers Tools C Help                                                                                                                
#include <stdlib.h>

#include <stdio.h>

#include <time.h>



/**                                                                                                                                                   
 * main -prints a number                                                                                                                              
 * Return: Always (success)                                                                                                                           
 */

int main(void)

{

        int n, lastd;
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (last > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd < 6 && lasd != 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	else if(lastd == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, lastd);
	}
	return (0);
}
