#include <stdio.h>

/**
 * main - the main function.
 * @argc: conter of inputs.
 * @argv: the input.
 * Return: 0.
*/
int main(int argc,  char *argv[])
{

	for (int i = 0; i <= argc; i++)
	{
		puts(argv[i]);
	}

	return (0);
}
