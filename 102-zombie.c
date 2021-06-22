#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
/**
 * infinite_while - Creates an infinite loop
 *
 * Return: void
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - create 5 zombie process
 *
 * Return: 0 upon success and 1 on failure
 */

int main(void)
{
	int i;
	pid_t pid[5];

	for (i = 0; i < 5; i++)
	{
		pid[i] = fork();
		if (pid[i] == 0)
			exit(0);
		else
		{
				printf("Zombie process created, PID: %d\n", pid[i]);
				sleep(1);
		}
	}
	infinite_while();
	return (0);
}
