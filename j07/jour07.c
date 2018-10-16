#COMPILATION
instead of compiling all *.c files. I can just make *.o of each of them. And then if I changed a file I need only to recompile those *.o connected, not the whole thing like with *.c.
gcc -c main.o ft_putchar.o ft_putstr.o -o j07

#MEMORY ALLOCATION

#include <stdlib.h>
#define LEN		42 // bites
int			main()
{
	int		i;
	char	*str; // with str[LEN + 1] I will allocate memory in definitive way. With malloc, I'll be able to free it.
	
	str = (char*)malloc(sizeof(*str) * (LEN + 1)); // 1 for the '\0'. char* - because otherwise it will be void* by default.
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10)
		i++;
	}
	str[i] = '\0';
	ft_putstr(str); // put while (1)	to make a program run indefinitely
	ft_putstr("\n"); //    ;			to check memory used.
	free(str);
	return (0);
}

./a.out & // launche program in the bacground to see memory used.
TOP // to see list of all running programs
