#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file
 * @filename: the name of the file
 * @letters: the number of letters it should read
 * Return: letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (bytes_written);
}

#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
const char *filename;
size_t letters;
ssize_t bytes_written;

if (argc != 2)
{
fprintf(stderr, "%s <filename>\n", argv[0]);
return (1);
}
filename = argv[1];
letters = 1024;

bytes_written = read_textfile(filename, letters);
if (bytes_written == 0)
{
fprintf(stderr, "%s\n", filename);
return (1);
}
return (0);
}
