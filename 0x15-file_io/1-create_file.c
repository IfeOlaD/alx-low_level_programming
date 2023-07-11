#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a file and write content into it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write into the file
 * Return: Return 1 on success, Return -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1 || n_written != strlen(text_content))
{
close(fd);
return (-1);
}
}
close(fd);

return (1);
}
