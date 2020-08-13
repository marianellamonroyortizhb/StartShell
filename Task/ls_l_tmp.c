#include <stdio.h> /* printf */
#include <unistd.h> /* fork */
#include <sys/wait.h> /* wait */
#include <stdlib.h> /* exit */
#include <sys/types.h>
#define NUM_CHILD 5


int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
	perror("Error:");
	}
	printf("After execve\n");
	return (0);
}

