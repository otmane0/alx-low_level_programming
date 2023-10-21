#include "main.h"


/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;


	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}
