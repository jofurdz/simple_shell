#include "shell.h"

/**
* _putchar- puts character
* @c: char to be printed
* Return: 1 on success, -1 on failure
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strlen- measures the length of a strength
* @s: pointer to string
* Return: length of string
**/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

