#include "shell.h"

/**
 * 
 * 
 * 
 */

char *dir(char **argv, char **path_tokens)
{
	struct dirent *dir_store;
	DIR *directory = NULL;
	int i;
	char *exe = NULL, *store = NULL;
	/* testing if its already an executable */
	if (argv[0][0] == '/')
	{
		return (argv[0]);
	}
	/* looping through path_tokens */
	for (i - 0; path_tokens[i] != NULL; i++)
	{
		/* using opendir to access everything in the path directories */
		directory = opendir(path_tokens[i]);
		/* reading open directories */
		while ((dir_store = readdir(directory)) != NULL)
		{
			/* if it matches it proceeds */
			if (_strcmp(argv[0], dir_store->d_name) == 0)
			{
				store = path_tokens[i];
				exe = exe_maker(store, argv);
				closedir(directory);
				return (exe);
			}
		}
		closedir(directory);
	}
	return (NULL);
}

/**
 * 
 * 
 */

char *exe_maker(char *store, char **argv)
{
	char *slash;
	char *command;

	/* adding a slash to first string */
	slash = _strcat(store, "/");
	/* concatenates both slash and argv strings */
	command = _strcat(slash, argv[0]);

	free(slash);
	return (command);
}
