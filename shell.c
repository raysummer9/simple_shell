#include "shell.h"

/**
 * main - main function
 * Return: void
 */

int main(void)
{
	char cmd[120];

	while (true)
	{
		show_prompt();
		get_command(cmd, sizeof(cmd));
		exec_command(cmd);
	}
}
