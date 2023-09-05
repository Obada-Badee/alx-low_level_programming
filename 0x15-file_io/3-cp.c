#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fileDsc: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *s, int fileDsc)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fileDsc %d\n", fileDsc);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: 1st file to copy from (fileDsc1), 2nd file to copy to (fileDsc2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fileDsc1, fileDsc2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fileDsc2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fileDsc2 == -1)
		__exit(99, argv[2], 0);

	fileDsc1 = open(argv[1], O_RDONLY);
	if (fileDsc1 == -1)
		__exit(98, argv[1], 0);

	while ((n_read = read(fileDsc1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_wrote = write(fileDsc2, buffer, n_read);
		if (n_wrote == -1)
			__exit(99, argv[2], 0);
	}

	close(fileDsc2) == -1 ? (__exit(100, NULL, fileDsc2)) : close(fileDsc2);
	close(fileDsc1) == -1 ? (__exit(100, NULL, fileDsc1)) : close(fileDsc1);
	return (0);
}
