#include "shell.h"

/**
* _puts- prints a string
* @str: pointer to string
**/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
* _strdup- returns a pointer to a newly allocated space in memory
* @str: string to be allocated
* Return: 0
**/
char *_strdup(char *str)
{
	char *x;
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	x = malloc(len + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	p = x;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (x);
}

/**
* _strcmp- compares two strings
* @s1: string to be compared
* @s2: string to be compared
* Return: 0
**/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

/**
*_strcat- entry point
*description: concatenates two strings
*@dest: string to copy to
*@src: string to be copied
*Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
dest[i + 1] = '\0';
return (dest);
}

/**
* everything_free- frees arrays of pointers
* @pointer_array: an array of pointers to free
* Return: void
**/
int everything_free(char **pointer_array)
{
	int i = 0;

	while (pointer_array[i])
	{
		free(pointer_array[i]);
		i++;
	}
	free(pointer_array);
}
