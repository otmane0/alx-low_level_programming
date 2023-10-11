#include "main.h"

/**
 * print_sign - Determines and visually represents the sign of an integer.
 *
 * Description:
 * This function takes an input integer 'n' and checks its sign.
 * It returns 1 and prints '+' if 'n' is greater than zero.
 * It returns 0 and prints '0' if 'n' is zero.
 * It returns -1 and prints '-' if 'n' is less than zero.
 *
 * @n: The integer to be checked for its sign.
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero, -1 if 'n' is negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
