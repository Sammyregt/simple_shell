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

	write(STDOUT_FILENO, "$ ", 3);
	return (0);
}
