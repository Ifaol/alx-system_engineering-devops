#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 *infinite_while - A function zt Runs an infinite loop with while.
 *
 *Return: Always 0.
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
 *main - A function that creates five zombie processes.
 *
 *Return: Always 0.
 */
int main(void)
{
pid_t my_pid;
int counter = 0;
while (counter < 5)
{
my_pid = fork();
if (my_pid > 0)
{
printf("Zombie process created, PID: %d\n", my_pid);
sleep(1);
counter++;
}
else
exit(0);
}
infinite_while();
return (EXIT_SUCCESS);
}
