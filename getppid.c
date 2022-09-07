#include "shell.h"

/**
 * pid - Print PID of the parent process
 *
 * Return: Always 0 (Success)
 */

int pid(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("hijo %u\n", my_pid);

	my_pid = getppid();
	printf("padre %u\n", my_pid);

	return (0);
}
