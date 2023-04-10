#include "main.h"

/**
* create_file - Create a function tha creates a file.
* @filename: file to create.
* @text_content: info to write into the file.
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file, file_open, file_write;

	if (filename == NULL)
	{
		return (-);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		file_write = write(file, text_content, _strlen(text_content));

		if (file_write == -1)
		{
			close(file_open);
			return (-1);
		}

		else 
		{
			close(file_open)
			return (1);
		}
	}

	else 
	{
		close(file_open);
		return (-1);
	}

}
