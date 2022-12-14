#include "main.h"

/**
 * _strspn - return the length of a prefix substring
 * @s: input string
 * @accept: a substring input
 * Return: number of bytes in the initial segment of s consisting bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int flag;
	char *r = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				counter++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = r;
		if (flag == 0)
			break;
	}
	return (counter);
}
