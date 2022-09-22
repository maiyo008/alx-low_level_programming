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
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
