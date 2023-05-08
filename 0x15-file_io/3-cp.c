#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define MAXSIZE 1024

/**
 * print_error - prints error message
 *
 * @exit_num: exit number
 * @file_name: file of  error
 * @fd: file descriptor
 * Return: none
 */
void print_error(int exit_num, char *file_name, int fd)
{
	switch (exit_num)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(exit_num);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			exit(exit_num);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			exit(exit_num);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(exit_num);
		default:
			break;
	}
}

/**
 * main - function makes a copy of file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int num_read, num_written;
	int close_status;
	char buffer[MAXSIZE];

	if (argc != 3)
	{
		print_error(97, NULL, 0);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error(98, argv[1], 0);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (file_to == -1)
	{
		close(file_from);
		print_error(99, argv[2], 0);
	}

	while ((num_read = read(file_from, buffer, MAXSIZE)) > 0)
	{
		num_written = write(file_to, buffer, num_read);
		if (num_written != num_read)
		{
			close(file_from);
			close(file_to);
			print_error(99, argv[2], 0);
		}
	}

	if (num_read < 0)
	{
		close(file_from);
		close(file_to);
		print_error(98, argv[1], 0);
	}

	close_status = close(file_from);
	if (close_status == -1)
	{
		print_error(100, NULL, file_from);
	}

	close_status = close(file_to);
	if (close_status == -1)
	{
		print_error(100, NULL, file_to);
	}

	return (0);
}

