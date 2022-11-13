#include <stdio.h>

/**
 * main - print command line arguments without using argc 
 * @argc - number of command line arguments
 * @argv - pointer to command line arguments strings
 * Return: Always 0.
 */
int main(int argc , char **argv)
{
	int i = 0;
	
	argc = 0;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
