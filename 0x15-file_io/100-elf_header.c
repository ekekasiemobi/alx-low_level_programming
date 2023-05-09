#include "main.h"
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fd, r, c;
	Elf64_Ehdr *header;

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file\n", argv[0]);
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, header, sizeof(Elf64_Ehdr));
	if (r < 0)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	verify_elf(header->e_ident);
	magic_value(header->e_ident);
	class_value(header->e_ident);

	free(header);
	c = close(fd);
	if (c)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	return (0);
}

/**
 * verify_elf - helper to check if input is valid elf file
 * @e_ident: pointer to char array
 */

void verify_elf(unsigned char *e_ident)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] == 0x7f && e_ident[i] == 'E' &&
			e_ident[i] == 'L' && e_ident[i] == 'F')
		{
			printf("ELF Header:\n");
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Not valid ELF\n");
			exit(98);
		}
	}
}

/**
 * magic_value - print the ELF magic numbers
 * @e_ident: pointer to an array containing the ELF magic numbers
 */
void magic_value(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
		printf("\n");
	}
		printf(" ");
}

/**
 * class_value - print ELF's class
 * @e_ident: pointer to char array
 */

void class_value(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("This class is invalid\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

