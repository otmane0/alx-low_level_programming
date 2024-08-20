#include "main.h"

/**
 * read_textfile - Reads a text file and print
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * fd: The file pointer to read from(srequest)
 * Return: The actual number of letters
 *         or 0 if the file cannot be opened/read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fd;
    char *array;
    size_t r_byt, w_byt;


    if (!filename)
        return (0);

    fd = fopen(filename, "r");
    if (!fd)
        return (0);

    array = malloc(letters * sizeof(char));
    if (!array)
    {
        fclose(fd);
        return (0);
    }
    r_byt = fread(array, sizeof(char), letters, fd);
    if (!r_byt || r_byt == 0)
    {
        free(array);
        fclose(fd);
        return(0);
    }
    if (letters > r_byt)
    {
        letters = r_byt;
    }

    w_byt = fwrite(array, sizeof(char), r_byt, stdout);
    free(array);
    fclose(fd);

    if (w_byt != r_byt)
        return (0);

    return(r_byt);


}

/**
 * Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0
*/
