#include "main.h"

/**
 * _strcmp - Entry point
 * @s1:char input
 * @s2:char input
 * Description:Compare two strings
 * Return:An int 
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;
	int val;

	while (*s1)
	{
		s1len++;
		s1++;
	}
	while (*s2)
	{
		s2len++;
		s2++;
	}
	if (s1len < s2len)
		val = -15;
	else if (s1len == s2len)
		val = 0;
	else
		val = 15;
	return (val);
}

