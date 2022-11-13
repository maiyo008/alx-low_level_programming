#include <stdio.h>
#include <unistd.h>

/**
 * main - get PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getppid();
	printf("%u\n", my_pid);
	return (0);
}
