#include <stdio.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *              from 'a' to 'z' using a while loop.
 *
 */
int main(void)
{
    char character = 'a';

    while (character <= 'z')
    {
        putchar(character);
        character++;
    }
    putchar('\n');

