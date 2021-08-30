#include "shell.h"
/**
 * _get_env- gets the path from the env
 * @env: the environment
 * Return: _env_parser funtion on success and NULL upon failure
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
			else /*this is new in case it breaks something*/
			{
				break;
			}
		}
	}
	return (NULL);
}

/**
 * _env_parser- tokenizes the path
 * @name: the path separated by :'s
 * Return: an array of path tokens
**/

char **_env_parser(char *name)
{
	int token_inc = 0;
	int tokencount = 0;
	char *tokenize = NULL;
	int i;
	char **brapp = NULL;
	char *namestore = name;

	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ':')
		{
			tokencount++;
		}
	}
	brapp = malloc(sizeof(char *) * (tokencount + 2));
	if (brapp != NULL)
	{
		tokenize = strtok(name, ":");
		while (token_inc < (tokencount + 1))
		{
			brapp[token_inc] = _strdup(tokenize);
			tokenize = strtok(NULL, ":");
			token_inc++;
		}
		brapp[token_inc] = NULL;
	}
	free(namestore);
	return (brapp);
}
