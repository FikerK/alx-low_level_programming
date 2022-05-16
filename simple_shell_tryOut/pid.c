#include <unistd.h>
#include <stdio.h>

/**
 * main - PID
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_ppid = getppid();
	my_pid = getpid();
	printf("%u\n", my_pid);
	printf("%u\n", my_ppid);
	return (0);
}
