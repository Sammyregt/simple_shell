#include "shell.h"

/**
 * main - Main entry point for the shell program
 *
 * @ac: number of items in av
 * @av: a pointer to a NULL terminated array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char *input_buffer;

	while (1)
	{
		print_prompt();
		input_buffer = read_input();
		free(input_buffer);
	}

	return (0);
}
