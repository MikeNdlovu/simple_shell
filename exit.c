#include "shell.h"
/**
 * exit_shell - exits the shell
 * @argv: array of strings containing exit command
 * Return: success
 */
int exit_shell(char **argv)
{
	if (argv[0][0] == 'e' && argv[0][1] == 'x' &&
	argv[0][2] == 'i' && argv[0][3] == 't')
	{
	_exit(98);
	}

	return (98);
}
