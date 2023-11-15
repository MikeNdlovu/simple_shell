#include "shell.h"

/**
 * empty_line - function that handles no input
 * @store: pointer to the empty line
 * @agv:string containing first command line arg
 * Return: success
 */
char *empty_line(char *store, char **agv)
{
	store = agv[0];
	return (store);
}
