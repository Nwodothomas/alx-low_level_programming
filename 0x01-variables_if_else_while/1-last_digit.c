#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX / 2;
		if (n % 10 > 10)
		{
			printf("Last digit of %i and is greaterthan 5\n", n, n % 10);
		}
		else if (n % 10 == 0)
		{
			printf("Last digit of %i and is 0\n", n, n % 10);
		}
		else
		{
			printf("Last digit of %i and less than 6, and not 0\n", n, n % 10;)
		}
		return(0);
}
