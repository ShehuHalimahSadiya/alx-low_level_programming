#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of byets from accept
 */
unsignedint _strspn(char *s, char *accept)
	{
		unsigned int length = 0;
		int i, j;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == acept[j])
				{
					length++;
					break;
				}
			}

			if  (accept[j] == '\0')
				break;
		}

		return (length);
	}
