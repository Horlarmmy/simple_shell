#ifndef SHELL_H
#define SHELL_H


char *without_comment(char *in);
void shell_loop(data_shell *datash);
char *read_line(int *i_eof);
#endif
