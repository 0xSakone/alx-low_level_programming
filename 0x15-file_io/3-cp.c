#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * erreur - fisplay erreur and exit with code
 * @msg: message
 * @code: erreur code
 * @argv: other text
 * Return: Always 0.
 */
void erreur(const char *msg, int code, const char *argv)
{
	dprintf(STDERR_FILENO, msg, argv);
	exit(code);
}

/**
 * main - check the code
 * @argc: number of arg
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fichier_src, fichier_dest;
	ssize_t lu, ecrit;
	char buffer[1024];

	if (argc != 3)
		erreur("Usage: cp file_from file_to\n", 97, "");

	fichier_src = open(argv[1], O_RDONLY);
	if (fichier_src == -1)
		erreur("Error: Can't read from file %s\n", 98, argv[1]);

	fichier_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fichier_dest == -1)
	{
		close(fichier_src);
		erreur("Error: Can't write to %s\n", 99, argv[2]);
	}

	while ((lu = read(fichier_src, buffer, 1024)) > 0)
	{
		ecrit = write(fichier_dest, buffer, lu);
		if (ecrit != lu)
		{
			close(fichier_src);
			close(fichier_dest);
			erreur("Error: Can't write to %s\n", 99, argv[2]);
		}
	}

	if (lu == -1)
		erreur("Error: Can't read from file %s\n", 98, argv[1]);

	if (close(fichier_src) == -1)
		erreur("Error: Can't close fd %d\n", 100, argv[1]);

	if (close(fichier_dest) == -1)
		erreur("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}
