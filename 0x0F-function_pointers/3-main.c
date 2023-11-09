#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of command0line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opp = get_op_func(argv[2]);

	if (opp == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)

	{
		printf("Error\n");
		exit(100);
	}

	result = opp(num1, num2);
	printf("%d\n", result);

	return (0);
}
