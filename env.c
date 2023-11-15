#include "shell.h"

/**
 * _env - prints the environment
 * @argv: string of args to activate function
 * @env: environment
 * Return: void
 */
char **_env(char **argv, char **env)
{
	int n = 0;

	if (argv[0][0] == 'e' && argv[0][1] == 'n' && argv[0][2] == 'v')
	{
	while (env[n] != NULL)
	{
	printf("%s\n", env[n]);
	n++;
	}
	}
	return (env);
}
