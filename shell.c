#include "shell.h"

/**
 * main - Main entry point for the shell program
 *
 * @ac: number of items in av
 * @av: a pointer to a NULL terminated array of strings
 * @env: Environment variables
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char **av, char **env)
{
	char *input_buffer;
	(void) ac;

	while (1)
	{
		print_prompt();
		input_buffer = read_input();
		execute_command(input_buffer, av, env);
		free(input_buffer);
	}

	return (0);
}
