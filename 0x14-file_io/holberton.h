#ifndef FILE_IO
#define FILE_IO
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int create_file2(const char *filename, char *text_content, int flag);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
#endif
