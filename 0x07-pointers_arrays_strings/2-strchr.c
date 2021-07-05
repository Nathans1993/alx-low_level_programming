#include "holberton.h"
/**
 * _strchr - finds the first occurrence of a character.
 * @s: String in which the character is searched
 * @c: Character that is searched.
 * Return: it return the pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
	while (*s !=c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return s;
	}
	else
	{
		return NULL;
	}
}
