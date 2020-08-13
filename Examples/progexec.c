#include <stdio.h> /* execv */
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
*/

int main(int argc, char* argv[])
{
	int i;

	printf("%s: %i \n", argv[0], getpid());
	
	for(i = 0; i < argc; i++)
	
	{
		printf("Argumento %d: %s \n", i, argv[i]);
	}
	return (0);
}
