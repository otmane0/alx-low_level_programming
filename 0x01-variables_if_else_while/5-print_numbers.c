#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");
	return (0);
}
