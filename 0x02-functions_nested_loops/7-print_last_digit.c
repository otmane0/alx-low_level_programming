#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The integer for which the last digit should be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int lastdig;
if (n < 0)
{
lastdig = -1 * (n % 10);
}
else
	lastdig = n % 10;

_putchar(lastdig + '0');
return (lastdig);
}
