#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space containing
 * the concatenated string, or NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, t = 0, n = 0;
	char *str;



	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";



	while(s1[i] != '\0')
	{
		i++;
	}

	while(s2[j] != '\0')
	{
		j++;
	}

	t = i + j;

	str = malloc((t + 1) * sizeof(char));
	if (!str)
		return (NULL);

	while (n < i)
	{
		str[n] = s1[n];
		n++;
	}
	n = 0;
	while (n < j)
	{
		str[i + n] = s2[n];
		n++;
	}
	str[t] = '\0';

	return (str);

}
