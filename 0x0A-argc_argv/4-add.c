#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  main - A program that adds positive numbers
 *  @argc: The arguments' counter
 *  @argv: The argument's values
 *  Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[argc]);
		result += a;
	}
	printf("%d\n", result);
	return (0);
}
