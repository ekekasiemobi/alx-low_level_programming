#include "main.h"
/**
 * main - copy content from file_from to file_to.
 * @argc: number of arguments the function takes
 * @argv: array of arguments thefunction takes
 * Return: return 0 always
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t file_read = 1024, file_write, file_close;
	char content[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (file_read == 1024)
	{
		file_read = read(file_from, content, 1024);
		file_write = write(file_to, content, file_read);

		if (file_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (file_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	file_close = close(file_from);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_from);
		exit(100);
	}
	file_close = close(file_to);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_to);
		exit(100);
	}

	return (0);
}
