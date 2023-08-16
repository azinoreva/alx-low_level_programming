#include "main.h"

/**
 * main - Entry point of the program
 * Description: This function prints the last digit of a number
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int a;	

	if (n < 0)
		n = -n;

	a = n % 10;
		
	if (a < 0)
		a = -a;
	
	_putchar(a + '0');
	
	return (a);
		
}
