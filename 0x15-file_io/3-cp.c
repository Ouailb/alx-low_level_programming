#include "main.h"

#define BUF_SIZE 1024

/**
 * print_error - Prints an error message to the standard error.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, exit with specific codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file");
		dprintf(STDERR_FILENO, "%s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to file");
		dprintf(STDERR_FILENO, "%s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	do
	{
		bytes_read = read(fd_from, buffer, BUF_SIZE);
		if (bytes_read == -1)
		{
			print_error("Error: Can't read from file");
			dprintf(STDERR_FILENO, "%s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error("Error: Can't write to file");
			dprintf(STDERR_FILENO, "%s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (bytes_read > 0);

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd");
		dprintf(STDERR_FILENO, "%d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd");
		dprintf(STDERR_FILENO, "%d\n", fd_to);
		exit(100);
	}

	return (0);
}

