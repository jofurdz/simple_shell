#include "shell.h"
/**
 * 
 * 
 * 
 */

char **tokenize(char *input_str)
{
	int token_incr = 0, i, token_count = 0;
	char **argv;
	char *tokenize;

	for (i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] = ' ')
		{
			token_count++;
		}
	}

	argv = malloc(sizeof(char) * token_count + 2);

	if (argv == NULL)
	{
		return (NULL);
	}
	else
	{
		tokenize = strtok(input_str, " ");

		while (token_incr < (token_count + 1))
		{
			argv[token_incr] = tokenize;
			tokenize = strtok(NULL, " ");
			token_incr++;
		}
		argv[token_incr] = NULL;
	}
	return (argv);
}
