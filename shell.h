#ifndef SHELL_H
#define SHELL_H

int _exec(char **arguments, char **env);
char *read_line(int *i_eof);
#endif
