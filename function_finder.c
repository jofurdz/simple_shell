#include "shell.h"

/**
 * 
 * 
 */

int function_finder(char **argv, char *buffer)
{
	int i;

	builtins arr[] = { { "cd", sh_cd },	  { "env", sh_env },
			   { "exit", sh_exit },	  { "setenv", sh_setenv },
			   { "alias", sh_alias }, { '\0', NULL } };

	if (argv != NULL)
	{
		/* checks exit */
		if (_strcmp(argv[0], "exit") == 0)
		{
			sh_exit(argv, buffer);
			return (1);
		} /* runs through our struct */
		for (i = 0; arr[i].func; i++)
		{
			/* iterating through the struct to find a match for the input */
			if (_strcmp(argv[0], arr[i].argv) == 0)
			{ /* runs the function that matches and returns 1 */
				arr[i].func();
				return (1);
			}
		}
	}
	return (0);
}
