#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a file and 
 * prints it to the POSIX std out
 * @filename: name of the file to read from
 * @letters: numbers of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdr, fdo, fdw;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = (char*)malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo == -1)
	{
		free(temp);
		return (0);
	}
	fdr = read(fdo, temp, letters);
	if (fdr == -1)
	{
		free(temp);
		return (0);
	}
	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);
	if (fdw == -1)
		return (0);
	return ((ssize_t)fdw);
}
