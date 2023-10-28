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
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	else if (argc != 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int sum = num1 * num2;
	}

	printf("%d\n", sum);

	return (0);
}
