#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function to create a file and write into it
 * @filename: name of the file
 * @text_content:NULL terminated string
 * Return: 1 or -1 on success of failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_count, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_count = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || write_count == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

