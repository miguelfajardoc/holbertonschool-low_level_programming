#ifndef VARIADICSF
#define VARIADICSF
/**
 * struct format - Struct format
 *
 * @a: The format
 * @f: The function to select
 */
void printc(char c);
void printfl(float f);
void printd(int i);
void prints(char *str);
typedef struct a
{
	char a;
	void (*f)();
} ptslt;
void printt(char *str);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
