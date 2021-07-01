#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 *@dest: destination
 *@src: source
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	while(*(++dest));
	while(*(dest++)= *(src++));
	
	return (dest);
}
