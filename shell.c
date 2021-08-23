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
	char **argv;
	size_t buff_length = 0;
	ssize_t userinput;

	while (1)
	{
		printf("$ ");
		userinput = getline(&buffer, &buff_length, stdin);
		if (userinput < 0)
			return (-1);
		argv = tokenize(buffer);
		while (argv[i])
		{
			printf("%s\n", argv[i]);
			i++;
		}
		if (!_strcmp(argv[0], "exit"))
		{
			break;
		}
	}
	free(argv);
	free(buffer);

	return (0);
}
