#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Example Table
 * 0, 0, 0, ...
 * 0, 1, 2, ...
 */
void times_table(void)
{
int num, column, prod;

for (num = 0; num <= 9; num++)
{
for (column = 0; column <= 9; column++)
{
prod = num * column;

if (column == 0)
{
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');

if (prod < 10)
{
_putchar(' ');
}
else
{
_putchar(result / 10 + '0');
}

_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
