#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * print_elf_header - elf printer
 * @header: elf header
 * Return: Always 0.
 */
void print_elf_header(Elf64_Ehdr header)
{
	printf("En-tête ELF:\n");
	printf("  Magique: ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("  Classe:                              %s\n",
		header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Données:                             %s\n",
		header.e_ident[EI_DATA] == ELFDATA2LSB ?
		"Complément à deux, little endian" : "Complément à deux, big endian");
	printf("  Version:                             %d (%s)\n",
		header.e_ident[EI_VERSION], header.e_ident[EI_VERSION] == EV_CURRENT ?
		"actuelle" : "inconnue");
	printf("  OS/ABI:                              %s\n",
		header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Inconnu");
	printf("  Version ABI:                         %d\n",
		header.e_ident[EI_ABIVERSION]);
	printf("  Type:                                %s\n",
		header.e_type == ET_EXEC ? "EXEC (Fichier exécutable)" :
		(header.e_type == ET_DYN ? "DYN (Fichier objet partagé)" : "Inconnu"));
	printf("  Adresse du point d'entrée:           0x%lx\n", header.e_entry);
}


/**
 * main - check the code
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Erreur : Impossible de lire le fichier %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		fprintf(stderr, "Erreur : Impossible de lire le fichier %s\n", argv[1]);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0
		|| header.e_ident[EI_MAG1] != ELFMAG1
		|| header.e_ident[EI_MAG2] != ELFMAG2
		|| header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		fprintf(stderr, "Erreur : %s n'est pas un fichier ELF\n", argv[1]);
		return (98);
	}

	print_elf_header(header);

	close(fd);
	return (0);
}
