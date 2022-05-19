#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <wchar.h>

extern char **environ;

/**
 * struct input - structure to store input after using getline
 * @line: the string argument
 * @num: the return value of getline
 */
typedef struct input
{
	char *line;
	int num;
} input_t;

input_t get_inputs(void);
void _fork(char **arguments, char **env);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
char *_strstr(char *haystack, const char *needle);
char *_strncat(char *first, char *second, int n);
int _exec(char **arguments, char **env);
char *read_line(int *i_eof);
#endif
