#include "shell.h"

/**
 * myprintf - print function
 * @str: string to print
 * Return: void
 */

void myprintf(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
