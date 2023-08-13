#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program for sign detec
 * Return: 0 (success)
 */ 
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if(n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if(n < 0)
        {
                printf("%d in negative\n", n);
        }
        else if(n == 0)
        {
                printf("%d is zero \n", n);
        }
        return (0);
}