#include "shell.h"

/**
 * main - shell
 *
 *Return: 0 
 */

int main(void)
{
	int i = 0;
	char *money_folder = "$ ";
	char *buffer = NULL;
	char **argv, **path_tokens;
	char *executable;
	size_t buff_length = 0;
	ssize_t userinput;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, money_folder,
			      _strlen(money_folder));
		}
		userinput = getline(&buffer, &buff_length, stdin);
		if (userinput < 0)
			break;
		argv = tokenize(buffer);
		if (argv[0] == NULL)
			continue;
		if (function_finder(argv, buffer) == 1)
		{
			free(argv);
			continue;
		}
		path_tokens = _get_env("PATH");
		executable = dir(argv, path_tokens);
		free(argv);
	}
	free(buffer);

	return (0);
}
