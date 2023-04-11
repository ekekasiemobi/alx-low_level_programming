#include "main.h"
/**
* read_textfile - check the code for Holberton School students.
* @filename:  the file to read and write
* @letters: number of letters to read and write.
* Return: returns letters written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_open, file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
		free(buffer);
	}

	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, buffer, letters);
	file_write = write(STDOUT_FILENO, buffer, file_read);

	if (file_open == -1)
	{
		free(buffer);
		return (0);
	}

	else if (file_read == -1 || file_write == -1)
	{
		free(buffer);
		return (0);
	}

	else
	{
		free(buffer);
		close(file_open);
	}


	return (file_write);

}
