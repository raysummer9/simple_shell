#include "shell.h"

void myprintf(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
