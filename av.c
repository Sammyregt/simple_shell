#include "shell.h"

/**
 * main - command line argument (prototype)
 *
 * @av: Null terminated arrays of strings
 * @ac: number of items in av
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
