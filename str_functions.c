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
* _strcat - linking two strings
* @dest: string to be linked
* @src: string to be linked
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
