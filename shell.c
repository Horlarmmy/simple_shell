#include "shell.h"

/**
 * main - main shell function
 * Description: Asimple shell
 * @ac: int number of variable
 * @av: input variable
 * @environ: environment variable
 * Return: Always 0 (Success)
 */

int main(int ac __attribute__((unused)), char **av, char **environ)
{
	while (*av && *environ)
	{
		printf("%s\n%s\n", *av, *environ);
		av++;
		environ++;
	}

	return (0);
}