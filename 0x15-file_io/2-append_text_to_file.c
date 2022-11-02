#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends text at the end of the file
 * @filename: name of the file
 * @text_content: Null terminated string to add to the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo,fdw, len = 0;
	
	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (-1);
	}
	while (*(text_content + len))
		len++;
	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw == -1)
		return (-1);
	
	return (1);
}
