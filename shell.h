#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void show_prompt(void);
void myprintf(const char *str);
void exec_command(const char *cmd);
void get_command(char *cmd, size_t size);

#endif
