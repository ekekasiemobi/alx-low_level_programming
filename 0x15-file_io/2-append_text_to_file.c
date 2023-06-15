#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file to be used.
* @text_content: content to be appended into the file.
* Return: when successful return 1, return -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, file_open, file_write;

	if (filename == NULL)
	{
		return (-1);
	}

	file_open = open(filename, O_WRONLY | O_APPEND);

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

	close(file_open);
	return (1);

}

