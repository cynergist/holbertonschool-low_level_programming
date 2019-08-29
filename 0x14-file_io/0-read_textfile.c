#include <stdio.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 *
 * @filename: a pointer to a string
 * @letters: number of letters to read and print
 * Return: 0 on failure, or if file can not be opened, read, or filename NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, now_reading, now_writing;
/* file descriptor, variables for reading and writing functions */
	char *buffer;
/* buffer to read data from. we already have letters, the len of buffer */
/* validation statements below */
	if (!filename)
		return (0);
/* we malloc letters to get the size of the buffer */
	buffer = malloc(letters);
	if (!buffer)
		return (0);
/* initialize open with file descriptor */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
/* initialize read with a variable set to parameters */
	now_reading = read(file, buffer, letters);
	if (now_reading == -1)
		return (0);
	{
		free(buffer);
		return (0);
	}
	close(file);
/* initialize write with a variable */
	now_writing = write(STDOUT_FILENO, buffer, now_reading);
	if (now_writing == -1)
	{
		free(buffer);
		return (0);
	}
	return (now_writing);
}
