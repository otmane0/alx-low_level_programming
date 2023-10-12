#include "main.h"

/**
 * print_most_numbers - Prints all numbers from 0 to 9 except for 2 and 5.
 */
void print_most_numbers(void)
{
char c = '0';
while (c <= '9')
{
if (c != '2' && c != '5')
{
putchar (c);
}
c++;
}
}
