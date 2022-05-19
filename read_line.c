#include "shell.h"

/**
 * read_line - reads the input string.
 *
 * @i_eof: return value of getline function
 * Return: input string
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t lineLen = 0;

	*i_eof = getline(&input, &lineLen, stdin);

	return (input);
}