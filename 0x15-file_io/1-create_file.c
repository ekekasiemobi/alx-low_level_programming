#include "main.h"

/**
* create_file - Create a function tha creates a file.
* @filename: file to create.
* @text_content: info to write into the file.
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int i, file_open, file_write;

	if (filename == NULL)
	{
		return (-1);
	}

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_open == -1)
	{
		return (-1);
	}

	if (text_content != NULL)

	{
		for (i = 0; text_content[i]; i++)
			;

		file_write = write(file_open, text_content, i);

		if (file_write == -1)
		{
			close(file_open);
			return (-1);
		}
		else
		{
			close(file_open);
			return (1);
		}
	}

	else
	{
		close(file_open);
		return (1);
	}

}

