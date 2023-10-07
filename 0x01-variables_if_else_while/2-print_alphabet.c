#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 *              from 'a' to 'z' using a while loop.
 *
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

