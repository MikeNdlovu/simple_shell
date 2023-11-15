#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

char *empty_line(char *store, char **agv);
int exit_shell(char **argv);
char **_env(char **argv, char **env);
int _stat(struct stat st, char **argv, char bin[100], char *tok, char *store);

#endif
