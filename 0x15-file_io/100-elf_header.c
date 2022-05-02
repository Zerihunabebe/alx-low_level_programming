#include "main.h"

/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if Success
 */
int main(int argc, char *argv[])
{
	register int fd, r, c;
	Elf64_Ehdr *header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(98);
				header = malloc(sizeof(Elf64_Ehdr));
				if (!header)
				dprintf(STDERR_FILENO, "Malloc error\n"), exit(98);
				fd = open(argv[1],O_RDONLY);
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
	exit(98)
	}
	validate_elf(header->e_ident);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header-e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	printf(" ABI Version:                        ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	c = close(fd);
	if (c)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	return (0);
}
