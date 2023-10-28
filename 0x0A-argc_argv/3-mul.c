#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function.
 * @argc: conter of inputs.
 * @argv: the input.
 * Return: 0.
*/
int main(int argc, char *argv[])
{

	int sum = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)

	{
		printf("Error");
		return (1);
	}

	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
