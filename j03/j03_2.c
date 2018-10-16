void	fct(int *a)
{
	*a = 12;
}

int main(void)
{
	int	a;

	a = 42;
	fct(&a);
	ft_putnbr(a);
	ft_putchar('\n');
	return (0);
}


void	ft_putaddr(void *ptr);

int	main(void)
{
	int	a;
	int	*ptr;
	int	**ptr2;
	void	*superptr; ** can take any pointers addresses and can return to anyone

	a = 3;
	ptr = &a;
	ptr2 = &ptr;
	superptr = &ptr2;
	ptr = superptr;
	superptr[1] = 12; ** will give a problem because it is void and it doesn't know how many bites to count
						so	void	* is just for transporting addresses
	
	return (0);
}
