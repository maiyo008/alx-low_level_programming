#include "main.h"

/**
 * _isalpha - Check function
 * @c: An input character
 * Description:Find if a character
 * is a letter, lowercase or uppercase
 * Return: 1 or 0 in otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
