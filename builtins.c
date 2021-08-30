#include "shell.h"
/**
* sh_exit- exits the shell
* @argv: tokenized user input
* @buffer: buffer used for getline
* Return: void
**/
int sh_exit(char **argv, char *buffer)
{
	free(argv);
	free(buffer);
	exit(0);
}
