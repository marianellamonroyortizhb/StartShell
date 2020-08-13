#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int input(char *s, int len);

int main ()
{
	char *buf;
	size_t b_size = 32;
	int ch_size; 

	buf = malloc (b_size * sizeof(char));
	
	while (buf)
	{
		printf("$ ");
		ch_size = getline(&buf, &b_size, stdin);

		if (ch_size == EOF)
			break;
		/*	printf("%lu characters were read.\n",ch_size);  */
		printf("%s", buf); 
	}

	free(buf);
	return(0);
}
