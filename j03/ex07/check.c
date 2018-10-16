#include <stdio.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char str[] = "hello";
	char *test;

	test = ft_strrev(str);
	printf("%s\n", test);
	return (0);
}
