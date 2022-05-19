#include "shell.h"

/**
 * get_inputs - get the input arguments from user
 *
 * Return: inputs
 */
input_t get_inputs(void)
{
	size_t n = 0;
	input_t inputs;

	inputs.line = NULL;
	inputs.num = getline(&inputs.line, &n, stdin);

	if (mydata.num == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else
			exit(EXIT_FAILURE);
	}

	return (mydata);
}