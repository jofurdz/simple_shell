#include "shell.h"

/**
* dir- function for navigating directories
* @argv: tokenized user input
* @path_tokens: tokenized path
* Return: the executable-ified user input and path combo
**/

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
	for (i = 0; path_tokens[i] != NULL; i++)
	{
		/* using opendir to access everything in the path directories */
		directory = opendir(path_tokens[i]);
		if (directory != NULL)
		{
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
		}
		else
		{
			perror(argv[0]);
		}
		closedir(directory);
	}
	return (NULL);
}

/**
* exe_maker- makes the friggin executable or whatever
* @store: friggin stores something
* @argv: tokenized user input
* Return: the executable plus a slash at the front
**/

char *exe_maker(char *store, char **argv)
{
	char *slash;
	char *command;

	/* adding a slash to first string */
	slash = _strcat(store, "/");
	/* concatenates both slash and argv strings */
	command = _strcat(slash, argv[0]);

	return (command);
}
/**
* execute- executes the dangum executable
* @executable: you get one guess as to what this is
* @argv: tomenized user input
* Return: 0
**/
int execute(char *executable, char **argv)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Fork failed\n");
	}
	if (pid == 0)
	{
		execve(executable, argv, environ);
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
