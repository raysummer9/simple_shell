#include "shell.h"

/**
 * get_command - a function that gets command to the std output
 * @cmd: command
 * @size: size
 * Return: returns void
 */

void get_command(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			myprintf("\n");
			exit(EXIT_SUCCESS);
		}

		else
		{
			myprintf("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}

	cmd[strcspn(cmd, "\n")] = '\0';
}
