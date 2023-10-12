#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments                         *
 * Return: always O
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", a[j]);
		if (j < n - 1)
			printf(" ");
	}
	printf("\n");

}


int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
