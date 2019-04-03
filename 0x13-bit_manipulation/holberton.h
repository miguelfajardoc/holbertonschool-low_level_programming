#ifndef BINARY_MANIPULATION
#define BINARY_MANIPULATION
int _pow_recursion(int x, int y);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
