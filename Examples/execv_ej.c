#include <stdio.h> /* execv */
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
*/

int main(int argc __attribute__((unused)), char* argv[])
{
	char *const argv2[] = {"prog2", "abcdef", "hola", NULL};
	printf("%s: %i \n", argv[0], getpid());
	execv("./progexec", argv2);
	
	printf("Error \n");
	return (-1);
}
