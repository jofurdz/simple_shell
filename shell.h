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

extern char **environ;

char **tokenize(char *input_str);
char **_env_parser(char *name);
char *_strdup(char *str);
void _puts(char *str);
int _strlen(char *s);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char **_get_env(char *env);
int shell_loop(int argc, char **argv);

typedef struct builtins
{
	char *argv;
	int(*func)();

} builtins;
#endif
