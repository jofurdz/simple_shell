#include "shell.h"

/**
 * _putchar - puts character 
 *
 * @c: char to be printed 
 *
 *Return: 1 on success, -1 on failure 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * strlen - measures the length of a strength
 *
 * @s: pointer to string
 *
 *Return: length of string 
 */

int _strlen(char *s)
{
	int length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * _puts - prints a string
 * @str: pointer to string
 */

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
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be allocated
 *
 *Return: 0
 */
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
* _strcmp - compares two strings
* @s1: string to be compared
* @s2: string to be compared
*Return: 0
*/
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
 * str_concat - concatenates strings
 *
 * @s1: string to be linked
 * @s2: string to be linked
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *blah;
	int length1 = 0, length2 = 0, p, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1])
	{
		length1++;
	}
	while (s2[length2])
	{
		length2++;
	}
	blah = malloc(length1 + length2 + 1);

	if (blah == NULL)
	{
		return (NULL);
	}
	for (p = 0; s1[p] != '\0'; p++)
	{
		blah[p] = s1[p];
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		blah[p + x] = s2[x];
	}
	return (blah);
}

/**
 *
 *
 */
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
