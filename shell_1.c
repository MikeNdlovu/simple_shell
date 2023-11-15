#include "shell.h"

/**
 * shell_1 - simple shell that takes one arg
 * @agc: count of args
 * @agv: args in cmd line
 * @env: current env
 * Return: success
 */
int shell_1(int agc, char **agv, char **env)
{
	size_t num = 1;
	char *line = NULL;
	char **argv;
	pid_t child_pid;
	int analyse;
	struct stat st;
	(void)agc;

	while (1)
	{
	printf("cisfun# ");
	getline(&line, &num, stdin);
	argv = malloc(sizeof(char) * 1500);
	strtok(line, "\t\n");

	argv[0] = strtok(line, "\t\n");
	argv[num] = NULL;

	if (stat(argv[0], &st) == -1)
	printf("%s: No such file or directory\n", agv[0]);

	child_pid = fork();

	if (child_pid == 0)
	execve(argv[0], argv, NULL);

	else
	wait(&analyse);
	}
	free(argv);
	return (0);
}
