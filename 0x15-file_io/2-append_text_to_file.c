#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - function to append text to the end of a file
 * @filename: file to be  appended to
 * @text_content: text that will be appended
 * Return: 1 or -1
 */
size_t _strlen(char *str);

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, _strlen(text_content));
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen - length of string
 * @str: string for length
 * Return: len
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str && str[len])
		len++;

	return (len);
}

