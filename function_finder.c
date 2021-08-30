#include "shell.h"

/**
* function_finder- just checks to see if the user's input is exit :P
* @argv: tokenized user input
* @buffer: buffer used by... getline
* Return: 0
**/

int function_finder(char **argv, char *buffer)
{
	int i;

	if (argv != NULL)
	{
		/* checks exit */
		if (_strcmp(argv[0], "exit") == 0)
		{
			sh_exit(argv, buffer);
			return (1);
		}
	}
	return (0);
}
