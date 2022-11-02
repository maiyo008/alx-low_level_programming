#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function to create a file
 * @filename:name of file to be created
 * @text_context:NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file cannot be created, 
 * file cannot be written)
 */
int create_file(const char *filename, char *text_context)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo == -1)
		return (-1);
	while (text_context && *(text_context + len))
		len++;
	fdw = write(fdo, text_context, len);
	close(fdo);
	if (fdw == -1)
		return (-1);
	return (1);
}
