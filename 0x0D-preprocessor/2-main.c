#include <stdio.h>
#include <stdlib.h>
#define name __FILE__

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the name of the source file.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf("%s\n", name);
	return (0);
}