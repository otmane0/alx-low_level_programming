#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_most_numbers - Prints all numbers from 0 to 9 except for 2 and 5.
 */
void print_most_numbers(void)
{
int ch = 48 ;
while (ch <= 57)
{
if (ch != 50 && ch != 52)
{
_putchar (ch);
}
ch++;
}
_putchar ('\n');
}
