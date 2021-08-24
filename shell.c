#include "shell.h"

/**
 * main - shell
 *
 *Return: 0 
 */

int main(void)
{
	int i = 0;
	char *buffer = NULL;
	char **argv, **path_tokens;
	size_t buff_length = 0;
	ssize_t userinput;

	while (1)
	{
		printf("$ ");
		userinput = getline(&buffer, &buff_length, stdin);
		if (userinput < 0)
			return (-1);
		argv = tokenize(buffer);
		if (function_finder(argv, buffer) == 1)
			continue;
		path_tokens = _get_env("PATH");
	}
	free(argv);
	free(buffer);

	return (0);
}
