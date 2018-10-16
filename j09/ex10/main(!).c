int	main(void)
{
	int a = 1;
	int	*a1;
	int	**a2;
	int	***a3;
	
	int	b = 2;
	int *b1;

	int	c = 3;
	int	*c1;
	int	**c2;
	int	***c3;
	int	****c4;
	int	*****c5;
	int	******c6;
	int *******c7;

	int	d = 4;
	int	*d1;
	int	**d2;
	int	***d3;
	int ****d4;
	
	a1 = &a;
	a2 = &a1;
	a3 = &a2;

	b1 = &b;

	c1 = &c;
	c2 = &c1;
	c3 = &c2;
	c4 = &c3;
	c5 = &c4;
	c6 = &c5;
	c7 = &c6;

	d1 = &d;
	d2 = &d1;
	d3 = &d2;
	d4 = &d3;

	printf("a %d, b %d, c %d, b %d\n", a, b, c, d);
	ft_scrambler(a3, b1, c7, d4);
	printf("a %d, b %d, c %d, b %d\n", a, b, c, d);
	return (0);
}
