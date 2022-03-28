#ifndef MAIN_H
#define MAIN_H

/* read a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* create a file */
int create_file(const char *filename, char *text_content);

/* append text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif
