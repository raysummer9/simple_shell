#include "shell.h"

/**
 * exec_command - function to execute a command in the shell
 * @cmd: pointer to the command
 * Return: returns void
 */

void exec_command(const char *cmd)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		myprintf("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *args[128];
		int arg_count = 0;
		char *envp[] = { NULL };

		char *token = strtok((char *)cmd, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		execve(args[0], args, envp);

		myprintf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
