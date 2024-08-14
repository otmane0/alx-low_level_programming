#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file with .
 * @filename: The name of the file to create.
 * @text_content: The content to write to.
 *
 * Return: 1 on success, -1 on failure.
 *         -1 if filename is NULL.
 *         -1 if file cannot be written.
 */


int create_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len = 0;
	size_t bytes_written;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
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
