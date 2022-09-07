#include "shell.h"

/**
 * readline - print $ and wait for the 
 * user to enter a command
 *
 * Return 0 (success)
 */

int readline(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
	}
	
	return (0);
}
