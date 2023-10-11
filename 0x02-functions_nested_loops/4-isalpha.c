# include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * Description:
 * This function takes an input character 'c'
 * and checks if it is an alphabetic letter.
 * It returns 1 if 'c' is a letter,
 * whether it's lowercase or uppercase, and 0 otherwise.
 *
 * @c: The character to be checked for alphabetic status.
 *
 * Return: 1 if 'c' is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c);
{
if (char ch >= 65 && ch <= 97)
{
return (1);
}
if else(char ch >= 97 && ch <= 122)
{
return (1);
}
else
{
return (0);
}
}
