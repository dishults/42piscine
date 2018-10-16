void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int	a;
	int	*ptr;
	char *ptr;
	int	**ptr2;

	a = 3;
	c = 'b';
	ptr = &a;
	ft_putnbr(*ptr);	** to write a value of it
	ft_putchar('\n');
		ptr = &c
	
	ptr2 = &ptr
	ft_putnbr(**ptr2);




	int tab [10];
	int tab2[10];
	int *tabptr[2];
	int *ptr;

	tab[0] = 42;
	*(tab + 0) = 42; ** the same as ^
	ptr = tab;
	*(ptr + 0) = 42;

	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr[1][0] = 42;
	*(tabtr[1] + 0) = 42;
	*(*(tabptr + 1) + 0) = 42;   
	ft_putnbr(tab2[0])
	return (0);
}
