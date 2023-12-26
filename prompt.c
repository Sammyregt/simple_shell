#include "shell.h"

/**
 * print_prompt - print the prompt to the user
 */

void print_prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 3);
}
