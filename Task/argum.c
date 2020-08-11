#include <stdio.h>

/**
 * main - fuction that prints the name
 *@ac: Count the number of arguments
 *@av: Double pointer to array
 *Return: 0 Success
 */

int main(int ac __attribute__((unused)), char **av)
{
	int len;

	for (len = 0; av[len]; len++)
		printf("%s\n", av[len]);

	return (0);
}
