#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive , zero or negative
 *
 * Description :  using the main function
 * Thi program prints "program is positve, zero, or negative"
 * Return
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negetive\n", n);
	}
	return(0)
}



