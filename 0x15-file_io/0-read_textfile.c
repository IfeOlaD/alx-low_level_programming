#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a textfile and print it to the POSIX output
 * @filename: name of the file to readd
 * @letters: name of the letters it should read and print
 * Return: actual numbers of letters it could read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

n_written = write(STDOUT_FILENO, buffer, n_read);
if (n_written == -1 || n_written != n_read)
return (0);

close(fd);
free(buffer);
return (n_written);
}

#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
ssize_t n_letters;

n_letters = read_textfile("myfile.txt", 1024);

if (n_letters == 0)
return (1);

return (0);
}
