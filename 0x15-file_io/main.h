#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
void print_error(int exit_num, char *file_name, int fd);


#endif
