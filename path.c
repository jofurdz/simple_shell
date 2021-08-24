#include "shell.h"
/**
 * _get_env- gets the current env
 * @env: the env
 * Return: _env_parser function on success, NULL on failure
**/
char **_get_env(char *env)
{
	int content;
	int line;
	char *name = NULL;
	/* iterate each line in the environment */
	for (line = 0; environ[line] != NULL; line++)
	{
		/* iterate each letter until we see a = */
		for (content = 0; environ[line][content] != '='; content++)
		{
			/* check that this env var name is what we're looking for */
			if (environ[line][content] == env[content])
			{
				/* we've hit the end of our search string */
				if (env[content + 1] == '\0' &&
				    environ[line][content + 1] == '=')
				{
					/* duplicate everything past the equals */
					name = _strdup(
						&(environ[line][content + 2]));
					/* parse and return */
					return (_env_parser(name));
				}
			}
		}
	}
	return (NULL);
}

/**
 * _env_parser- tokenizes the PATH
 * @name: the full PATH seperated by :'s
 * Return: an array of strings
**/

char **_env_parser(char *name)
{
	int token_inc;
	int tokencount;
	char *tokenize = NULL;
	int i;
	char **p = NULL;
	char *namestore = name;

	tokencount = 0;
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ':')
		{
			tokencount++;
		}
	}
	p = malloc(sizeof(char *) * (tokencount + 2));
	if (p != NULL)
	{
		token_inc = 0;
		tokenize = strtok(name, ":");
		while (token_inc < (tokencount + 1))
		{
			p[token_inc] = _strdup(tokenize);
			tokenize = strtok(NULL, ":");
			token_inc++;
		}
		p[token_inc] = NULL;
	}
	free(namestore);
	return (p);
}
