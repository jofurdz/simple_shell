#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <dirent.h>

extern char **environ;
int sh_env(void);
int execute(char *executable, char **argv);
char **tokenize(char *input_str);
char **_env_parser(char *name);
char *_strdup(char *str);
void _puts(char *str);
int _strlen(char *s);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char **_get_env(char *env);
int shell_loop(int argc, char **argv);
int sh_exit(char **argv, char *buffer);
int function_finder(char **argv, char *buffer);
char *_strcat(char *dest, char *src);
char *exe_maker(char *store, char **argv);
char *dir(char **argv, char **path_tokens);
void everything_free(char **pointer_array);
/**
* struct builtins- stores builtins
* @argv: tokenized user input
* @func: string representing a builtin command
**/
typedef struct builtins
{
	char *argv;
	int (*func)();
} builtins;

#endif
