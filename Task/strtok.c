#include <stdio.h> 
#include <string.h> 

int main() 
{
	char str[] = "Hola Betty Holberton";
/*	int len; */
	char *token;
	
/*	for (len = 0; av[len]; len++) */
		;

	token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return 0;
}
