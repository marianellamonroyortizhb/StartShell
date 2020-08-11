#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t pidC;
	char whois; 
	whois = 0;
	printf("** Inicial el proceso PID = %d **\n", getpid());
	pidC = fork(); /* Crea el proceso hijo*/
	printf("Proceso en ejecución PID = %d\n", getpid());
	printf("pidC = %d\n", pidC);
	
	if(pidC > 0)
	{
		printf("Se está ejecutando el padre\n");
		whois = 'P';
	}
	else if(pidC == 0)
	{
		printf("Se está ejecutando el hijo\n");
		whois = 'H';
	}
	else
	{
		printf("Se produjo un error al crear el hijo\n");
		whois = 'E';
	}

	while(1)
	{
		sleep(2);
		printf("Proceso en ejecución PID = %d\n", getpid());
		printf("¿Quien es?: %c\n", whois);
	}	
	return 0;
}
