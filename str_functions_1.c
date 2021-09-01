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
	char *duplicate = NULL;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
return (duplicate);
}
/**
* _strcmp- compares two strings
* @s1: string to be compared
* @s2: string to be compared
* Return: 0
**/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}
return (0);
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
	int a, p, x;
	char *newcmd = NULL;

	for (p = 0; dest[p] != '\0'; p++)
	{}
	for (a = 0; src[a] != '\0'; a++)
	{}
	newcmd = malloc(sizeof(char) * (a + p + 1));
	for (x = 0; x < p; x++)
	{
		newcmd[x] = dest[x];
	}
	for (x = 0; x < a; x++)
	{
		newcmd[x + p] = src[x];
	}
	newcmd[x + p] = '\0';
	return (newcmd);
}
/**
* everything_free- frees arrays of pointers
* @pointer_array: an array of pointers to free
* Return: void
**/
void everything_free(char **pointer_array)
{
	int i = 0;

	while (pointer_array[i])
	{
		free(pointer_array[i]);
		i++;
	}
	free(pointer_array);
}
