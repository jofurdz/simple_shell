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

	builtins arr[] = { /*struct for builtin functions */
			   { "env", sh_env },
			   { "exit", sh_exit },
			   { '\0', NULL }
	};
	if (argv != NULL)
	{
		/* checks exit */
		if (_strcmp(argv[0], "exit") == 0)
		{
			sh_exit(argv, buffer);
			return (1);
		}
		for (i = 0; arr[i].func; i++)
		{ /* finds which function to run, if one is found, it is grabbed */
			if (_strcmp(argv[0], arr[i].argv) == 0)
			{ /* runs the function and returns 1 */
				arr[i].func();
				return (1);
			}
		}
	}
	return (0);
}
