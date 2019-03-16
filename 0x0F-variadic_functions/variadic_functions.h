#ifndef VARIADICSF
#define VARIADICSF
/**
 * struct format - Struct format
 *
 * @a: The format
 * @f: The function to select
 */
typedef struct format
{
	char *a;
	void (*f)();
} ptslt;
void printt(char *str);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
