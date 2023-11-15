#include "shell.h"

/**
 * main - function that makes a simple shell
 * @argc: number of arguments
 * @agv: array of strings containing arguments
 * @env: environment of the function
 * Return: success
 */
int main(int argc, char **agv, char **env)
{
	char *argv[20], *store, bin[100], *tok = NULL;
	int analyse = 0;
	size_t num = 0;
	pid_t child_pid;
	struct stat st;
	(void)argc;

	while (1)
	{
	printf("($) ");
	getline(&store, &num, stdin);
	if (*store == '\n')
	{
	store = agv[0];
	continue;
	}
	argv[0] = strtok(store, "\t\n");
	argv[1] = NULL;
	exit_shell(argv);
	if (argv[0][0] == 'e' && argv[0][1] == 'n' && argv[0][1] == 'v')
	{
	_env(argv, env);
	continue;
	}
	_stat(st, argv, bin, tok, store);
	if (stat(argv[0], &st) == -1)
	{
	printf("%s: No such file or directory\n", store);
	continue;
	}
	child_pid = fork();
	if (child_pid == 0)
	execve(argv[0], argv, env);
	else
	wait(&analyse);
	}
	return (0);
}
