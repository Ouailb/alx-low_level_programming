#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}


	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes - 1; i++)
		printf("%02x ", main_ptr[i]);

	printf("%02x\n", main_ptr[i]);

	return (0);
}
