#include <stdio.h>
#include <stdlib.h>

/* Additional headers can go here */

/**
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ch = 'a';

    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }

    return (0);
}
