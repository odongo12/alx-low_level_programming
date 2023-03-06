#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}

	return (NULL);
}
