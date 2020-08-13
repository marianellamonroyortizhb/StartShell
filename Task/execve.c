#include <stdio.h> /* printf */
#include <unistd.h> /* fork */
#include <sys/wait.h> /* wait */
#include <stdlib.h> /* exit */
#include <sys/types.h>
#define NUM_CHILD 5

int main (void)
{
	pid_t pidC;
	int i;
	int status;  

	char *argv2[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for(i = 0; i < NUM_CHILD; i++)
	{
		pidC = fork();
		
		if(pidC > 0)
		{
			wait(&status);
			printf("Se está ejecutando el padre\n");
			continue;
		}

		else if(pidC == 0)
		{
			printf("Se está ejecutando el hijo No. %d, con PID = %d\n", i, getpid());
			execv("./ls_l_tmp", argv2);
			exit(10); /* exito */
		}
		else
		{
			printf("Se produjo un error al crear el hijo\n");
			exit(99); /* error */
		}
		
	}
	while(1)
	{
		sleep(50);
	}
}
