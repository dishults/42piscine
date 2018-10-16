#Makefile // with catital M !
rule_a:
	echo "rule A" //make rule_a		will print "rule A"
rule_b: rule_a // rule_a is executed before rule_b
	echo "rule B"




TEXT = "42 is for the braves"

rule_a:
	echo $(TEXT)



NAME = awesomeprog

SRC = source.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all



#pointer-to-function
int		x;
int		*y;

							typedef	void (*funptr)(char);
void	f(charc);
void	(*funptr)(char);

int		main(void)
{
	void (*f)(char);		funptr		f;
	
	f =  &ft_putchar;
	f('z');
	return (0);
}
