#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fileDsc;
	int n_wrote;

	if (!filename)
		return (-1);

	fileDsc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDsc == -1)
		return (-1);

	if (!text_content)
	{
		close(fileDsc);
		return (1);
	}

	n_wrote = write(fileDsc, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fileDsc);
		return (-1);
	}

	close(fileDsc);
	return (1);
}
