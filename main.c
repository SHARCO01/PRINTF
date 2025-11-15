# include "printf.h"

int ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return i;
}

int main()
{
	//int i = write(1, "hello", 5);
	int i = 10 + ft_putstr("helloa");

	printf("%d", i);
}
