#include "shell.h"

int _exec(char **arguments, char **env)
{
	if (execve(arguments[0], arguments, env) == -1)
		perror("Error:");

	return (0);
}