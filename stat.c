#include "shell.h"

/**
 * _stat - checks whether filepath exists or not
 * if not then access /bin and if still not error
 * @argv: array of strings containg commands and path
 * @bin: contains the bin path
 * @tok: contains tokenised string
 * @st: check statistical value of path
 * @store: containscommand line args
 * Return: success
 */
int _stat(struct stat st, char **argv, char bin[100], char *tok, char *store)
{
	int i;

	if (stat(argv[0], &st) == -1)
	{
	strcpy(bin, "/bin/");
	argv[0] = strtok(store, " \t\n");
	strcat(bin, argv[0]);
	argv[0] = bin;

	tok = strtok(NULL, " \t\n");
	i = 1;
	while (tok != NULL)
	{
	argv[i] = tok;
	tok = strtok(NULL, " \t\n");
	i++;
	}
	argv[i] = NULL;
	}

	return (i);
}
