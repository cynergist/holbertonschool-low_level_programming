#include <stdio.h>
#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer to a string
 * @text_content: a pointer to a string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, file_length, now_writing;
/* file descriptor, variables for file length and writing functions */
/* validation statements below */
	if (!filename)
		return (-1);
	printf("%s", "fails");
/* initialize open with file descriptor */
	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (!file)
		return (-1);
	printf("%s", "fails");
	if (!text_content)
		return (1);
	printf("%s", "success");
/* find file length*/
	file_length = 0;

	while (text_content[file_length])
		file_length++;
/* initialize write with a variable */
	now_writing = write(file, text_content, file_length);
	if (now_writing == -1 || now_writing != file_length)
		return (-1);
	printf("%s", "fails");
	close(file);
	return (-1);
}
