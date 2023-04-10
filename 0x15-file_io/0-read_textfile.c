 ssize_t file_open, file_read, file_write;
        char *buffer;

        if (filename == NULL)
        {
                return (0);
        }

        buffer = malloc(sizeof(char) * letters);

        if (buffer == NULL)
        {
                return (0)
                free(buffer)
        }

        file_open = open(filename,O_RDONLY);

        if (file_open == -1)
        {
                free(buffer)
                return (0)
        }

        file_read = read(file_open, buffer, letter);

        else if (file_read == -1)
        {
                free(buffer)
                return (0)
        }

        file_write = write(STDOUT_FILENO, buffer, file_read)

        else if (file_write == -1)
        {
                free(buffer)

