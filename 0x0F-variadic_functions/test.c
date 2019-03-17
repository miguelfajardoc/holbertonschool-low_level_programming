#include <stdio.h>
void func(char *s);
void fund(int s);
void funs(char *s);
typedef struct a{
	char a;
	void (*f)();
} aaa;
int main()
{
	char s = 's';
	aaa sl = { 'a', func};
	sl.f = func;
	sl.f(s);
	return (0);
}
void func(char *s)
{
	printf("%s\n", s);
}
void fund(int s)
{
	printf("%d\n", s);
}
void funs(char *s)
{
	printf("%s\n", s);
}
