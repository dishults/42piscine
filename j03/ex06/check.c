#include <unistd.h>

int	ft_strlen(char *str);
int ft_putchar(char c);

int main(void)
{
	char *str = "hello"; 
	int len = ft_strlen(str);

	ft_putchar(len + '0');
	return (0);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
