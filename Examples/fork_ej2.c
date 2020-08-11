#include <stdio.h> /* printf */
#include <unistd.h> /* fork */
#include <sys/wait.h> /* wait */
#include <stdlib.h> /* Random */
#include <sys/types.h>
#define NUM_CHILD 5
int main (void)
{
	pid_t pidC;
	int i;
	int status;

	for(i = 0; i < NUM_CHILD; i++)
	{
		pidC = fork();
				
		if(pidC > 0)
		{
			continue;
			printf("Hijo No. %d", i);
		}

		else if(pidC == 0)
		{
			printf("Se está ejecutando el hijo No. %d, con PID = %d\n", i, getpid());
			exit(10); /* exito */
		}
		else
		{
			printf("Se produjo un error al crear el hijo\n");
			exit(99); /* error */
		}
	}
	for (i = 0; i < NUM_CHILD; i++)
	{
		pidC = wait(&status);
		printf("Padre: PID = %d, Hijo PID = %d. Estado = %d\n", getpid(), pidC, WEXITSTATUS(status));

	}
	while(1)
	{
		sleep(30);
	}
}
