#LIBRARIES
gcc -c ft_putstr.c	// will create .o file which we need to create a library.

ar rc libstr.a ft_putchar.o ft_putstr.o // to put both of my functions in it

gcc main.c -L. -lstr // to look for library in a current directory with the folowing name

ranlib libstr.a // takes my lib as a parameter and creates index in it (ex., 1 for ft_putchar, 2 for ft_putstr), which will allow gcc to know where to go. It just optimises compilation time.

#ARGUMENTS
gcc main.c -L. -lstr // I can simply compile like this if I used, for ex, ft_putchar in main.

int	main(int argc, char **argv)
{
	ft_putstr("bonjour ");
	ft_putstr(argv[1]); // because 0 would be ./a.out
	ft_putchar('\n');
}

./a.out les gens // will display only les
./a.out "les gens" // will display everything

//display it only if there are argiments passed in command line.
int	main(int argc, char **argv)
{
	ft_putstr("bonjour ");
	if (argc == 2)
		ft_putstr(argv[1]);
	else
	{
		ft_putstr("usage: ./a.out toto\n"); // to give correct usage example
		return (0);
	}
	ft_putchar('\n');
}
