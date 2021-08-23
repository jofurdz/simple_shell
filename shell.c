#include "shell.h"

/**
 * main - shell
 *
 *Return: 0 
 */

/*int main(void)*/
int main(int argc, char **argv)
{
	shell_loop(argc, argv);
	return(0);
}

int shell_loop(int argc, char **argv)
{
	int i = 0;
	char *buffer = NULL;
	size_t buff_length;
	int userinput;
	char **path_tokens;
	(void) argc;

	buffer = NULL;
	while (1)
	{
		printf("$ ");
		userinput = getline(&buffer, &buff_length, stdin);
		if (userinput < 0)
			break;
		argv = tokenize(buffer);
		if (argv[0] == NULL) /** new **/
			continue;
		if (_strcmp(argv[0], "exit") == 0)
		{
			break;
		}
	}
	free(argv);
	free(buffer);

	return (0);
}
