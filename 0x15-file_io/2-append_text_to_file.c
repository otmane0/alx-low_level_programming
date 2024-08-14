#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Appends text to the .
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string ile.
 *
 * Return: 1 on success, -1 on failure ,
 *         write fails, etc.).  If
 *         text_content is NULL, if the file
 *         exists, return 1, other.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len = 0;
	size_t bytes_written;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = fwrite(text_content, sizeof(char), len, file);
		if (bytes_written != len)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);

	return (1);
}
