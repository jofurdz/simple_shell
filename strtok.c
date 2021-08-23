#include "shell.h"
/**
 * 
 * 
 * 
 */

char **tokenize(char *input_str)
{	
	int i;
	int token_incr = 0;
	int token_count = 0;
	char **argv = NULL;
	char *tokenize = NULL;
	int j;

	strtok(input_str, "\n");
	for (i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] == ' ')
		{
			token_count++;
		}
	}

	argv = malloc(8 * (token_count + 2));

	if (argv != NULL)
	{
		token_incr = 0;
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
