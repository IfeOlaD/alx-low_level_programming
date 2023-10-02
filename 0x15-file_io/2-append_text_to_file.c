#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - adds text to the end of a file
 * @filename: the name of the file to append
 * @text_content:the text to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd_open, fd_write;

if (filename == NULL)
return (-1);
fd_open = open(filename, O_RDWR | O_APPEND);
if (fd_open == -1)
return (-1);
if (text_content != NULL)
{
fd_write = write(fd_open, text_content, _strlen(text_content));
if (fd_write == -1)
return (-1);
}
close(fd_open);
return (1);
}

/**
 * _strlen - length of the string
 * @str: pointer to chars
 * Return: length of the string
 */

int _strlen(char *str)
{
int len = 0;

while (*str++)
len++;
return (len);
}
