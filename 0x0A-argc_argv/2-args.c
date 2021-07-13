#include "holberton.h"
#include<stdio.h>

/**
 * main - Prints the number of arguments passes into it
 * @argc: count of arguments
 * @argv: array of pointers to the strings passed
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
        int i;

        for (i = 0; i < argc; i++)
        {
                printf("%s\n", argv[i]);
        }
        return (0);
}
~
~
