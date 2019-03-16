#include <stdio.h>
void fun(char *s);
typedef struct a{
	char a;
	void (*f)();
} aaa;
int main()
{
	char *s = "ala";
	aaa sl = { 'a', fun};
	sl.f = fun;
	sl.f(s);
	return (0);
}
void fun(char *s)
{
	printf("%s", s);
}
	/*void (*f)();*/
