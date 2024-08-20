#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 * @argc: The num of arguments supplied in the program.
 * @argv: An array of argc.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
