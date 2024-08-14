#include "main.h"


/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened/read, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL)
        return (0);

    /* Open the file in read-only mode */
    fd = open(filename, "r");
    if (fd == -1)
        return (0);

    /* Allocate buffer */
    buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    /* Read the file */
    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to standard output */
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Clean up */
    free(buffer);
    close(fd);

    return (bytes_written);
}