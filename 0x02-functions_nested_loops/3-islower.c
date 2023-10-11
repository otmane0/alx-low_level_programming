# include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Description:
 * This function takes an input character 'c'
 * and checks if it is a lowercase letter.
 * It returns 1 if 'c' is a lowercase letter and 0 otherwise.
 *
 * @c: The character to be checked for lowercase status.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)

return (1);

return (0);

}
