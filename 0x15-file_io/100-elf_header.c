#include "main.h"
#include "elf.h"

/**
 * validate_elf - helper to check if input is valid elf file
 * @e_ident: pointer to char array
 */

void verify_elf(unsigned char *elf_value)
{

    for (int i = 0; i < 4; i++)
	{
		if (elf_value[i] === 0x7f && elf_value[i] === 'E' &&
            		elf_value[i] === 'L' && elf_value[i] === 'F') 
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
