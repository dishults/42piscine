//JOUR03
ex06
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

ex07
int	main(void)
{
	char str[] = "hello";
	char *test;
	
	test = ft_strrev(str);
	printf("%s\n", test);
	return (0);
}

ex08
int main()
{
	char str[] = "89789";
	int val = ft_atoi(str);
	
	printf ("%d", val);
	return 0;
}

ex09
int	ft_putnbr(int nbr)
{
	write(1, &nbr, sizeof(int));
	return (0);
}

int	main(void)
{
	int size = 5;
	int i = 0;
	int tab[] = {8, 9, 0, 4, 3};
	ft_sort_integer_table(tab, size);
	while(size)
	{
		ft_putnbr(tab[i] + '0');
		size--;
		i++;
	}
}

//JOUR05
ex04
int main()
{
	char	src[] = "CylahPWNyfmTYSZLwHYOIDngYjTHgloSYRS";
	char	dest[] = "Hello";
	unsigned int	n = 36;
	
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}

ex05
int	main(void)
{
	
	char str1[] = "lnjkgnjgrlowdktonkfnfloteuuu";
	char str2[] = "lot";
	printf("%s\n", ft_strstr(str1, str2));
	printf("%s\n", strstr(str1, str2));
	return (0);
}

ex18
int	main(void)
{
	char src1[10]	= "ab";
	char dest1[10]   = "123";
	
	char src[10]	= "ab";
	char dest[10]	= "123";
	
	unsigned int	nb = 2;
	unsigned int 	nb2 = 2;
	printf("Str: %ld \n", strlcat(dest1, src1, nb));
	printf("Dest: %s \n", dest1);
	printf("Str: %u \n", ft_strlcat(dest, src, nb));
	printf("Dest: %s \n", dest);
	return (0);
}

ex19
int main(void)
{
	char src1[10]	= "ab121";
	char dest1[10]   = "12123123";
	
	char src[10]	= "ab121";
	char dest[10]	= "12123123";
	
	unsigned int	nb = 8;
	unsigned int 	nb2 = 8;
	printf("Str: %ld \n", strlcpy(dest1, src1, nb));
	printf("Dest: %s \n", dest1);
	printf("Str: %u", ft_strlcpy(dest, src, nb2));
	printf("Dest: %s \n", dest);
	return (0);
}

//JOUR07
ex02
int	main()
{
	int		*range = 0;
	int		min = 1;
	int		max = 17;
	int		i = 0;
	
	int res = ft_ultimate_range(&range, min, max);
	printf("Nb %d - ", res);
	while (i < res)
		printf("%d ", range[i++]);
	return (0);
}

ex04
int		main(void)
{
	char **cf;
	int i;
	
	i = 0;
	cf = ft_split_whitespaces("         Hello w0rld\tof\nfriends !   ");
	while(cf[i] != 0)
	{
		printf("%s\n", cf[i]);
		i++;
	}
	
	return (0);.
}

//JOUR08
ex02
#include "ft_boolean.h"

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}

ex04
#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;
	set_point(&point);
	printf("%i\n", point.x);
	printf("%i\n", point.y);
	return (0);
}

ex05
int				main(int ac, char **av)
{
	int			i;
	t_stock_par	*stck;
	
	
	i = 0;
	stck = malloc(sizeof(t_stock_par) * (ac + 1));
	stck = ft_param_to_tab(ac, av);
	ft_show_tab(stck);
}
gcc *.c *.h

//JOUR10
ex05
int		ft_intcmp(int i, int j)
{
	return (i-j);
}

int		main()
{
	int		sorted[4] = {2, 12, 42, 102};
	int		nonsorted[4] = {2, 32, 42, 12};
	
	int		yes = ft_is_sort(sorted, 4, &ft_intcmp);
	int		no = ft_is_sort(nonsorted, 4, &ft_intcmp);
	
	printf("%i, %i", yes, no);
	return 0;
}
