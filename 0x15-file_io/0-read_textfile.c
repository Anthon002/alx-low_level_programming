#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file.
 * @filename: pointer to file.
 * @letters:number of letters printed.
 * Return:0 or number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_read, num_written;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buf, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (num_written);
}

