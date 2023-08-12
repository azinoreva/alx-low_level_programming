#include <stdlib.h>
#include <time.h>
#include <time.h>
/**
 * main - Determiners if a number is positive, negative or zero
 * return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n",n);
	}
	return (0);
}
