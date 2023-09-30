#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - cdoe that creates two zombie processes
 * @pid - the identifier
 *
 * Return: the pid
 */
int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		pid_t pid = fork();
		if (pid == 0)
		{
			exit (0);
		}
		else if (pid < 0)
		{
			perror("fork error");
			exit (1);
		} else {
			printf("Zombie process created, PID: %d\n", pid);
		}
	}
	while (1)
	{
		sleep(1);
	}

	return (0);
}
