#include "shell.h"

/**
 * _getenv - 
 *
 * @name: name of environmental variable
 *Return:  
 */

char *_getenv(const char *name)
{
	int line_content, line_number;
	char *env_path = NULL;

	for (line_number = 0; environ[line_number] != NULL; line_number++)
	{
		for (line_content = 0;
		     environ[line_number][line_content] != '='; line_content++)
		{
			if (_strcmp(*grab_name(environ[line_number]), "PATH") ==
			    0)
			{
				return (*env_tokenize(env_path);
			}
			return (NULL);
		}
	}
}

/**
 * 
 * 
 */

char *grab_name(char *full_line)
{
	int i = 0, length;
	char *after_name;

	for (i = 0; full_line[i] != '='; i++)
	{
		length = i;
	}
	after_name = malloc(sizeof(char) * length)

		for (i; i < length; i++)
	{
		after_name[i] = full_line[i];
	}
	return (after_name);
}

char **env_tokenize(char *input_str)
{
	int token_incr = 0, i, token_count = 0;
	char **env_tokens;
	char *tokenize;

	for (i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] = ":")
		{
			token_count++;
		}
	}

	env_tokens = malloc(sizeof(char) * token_count + 2);

	if (env_tokens == NULL)
	{
		return (NULL);
	}
	else
	{
		tokenize = strtok(input_str, ':');

		while (token_incr < (token_count + 1))
		{
			env_tokens[] = tokenize;
			tokenize = strtok(NULL, ":");
			token_incr++;
		}
		*env_tokens[] = NULL;
	}
	return (env_tokens);
}
