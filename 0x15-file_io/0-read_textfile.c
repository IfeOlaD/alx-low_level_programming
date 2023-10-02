#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a textfile file and prints it
 * to the POSIX Standard output
 * @filename: name of the fule to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n_read, n_written;
int fd;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

n_read = read(fd, buf, letters);
if (n_read == -1)
return (0);

n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1 || n_written != n_read)
return (0);

close(fd);
free(buf);

return (n_written);
}

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read and return the number of letters in a file
 * @filename: the pointer to the name of the file
 * @letters: the letters in the file
 * Return: 0
 */

int main(const char *filename, size_t letters)
{
open("test", O_RDONLY | O_CREAT);
}
