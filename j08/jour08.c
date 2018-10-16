cpp main.c // will allow me to see what happens before compilation

#include "ftc.h"
//and there I put
void	ft_fct(int a);

#define TOTO "hey there"// TOTO wil be replaces with int
str[] = TOTO;

#define TOTO(x) int x;
TOTO(a) //even without ;		int a
TOTO(b) // will change to		int b

#define TOTO(x) #x;
char	*str;

str = TOTO(a); // it will be replaces with the content
write(1, str, 1); // will print a



#define TOTO

// if TOTO has been defined my main will be written
#ifdef TOTO
# ifndef TITI // (ifndef = not defined)
int	main(void)
{
	return (0);
}
# endif
#endif




//how to protect your files
#ifndef __FT_TEST1_H__
#define __FT_TEST1_H__
#include "test2.h"

#endif



typedef int cacahuete; // size_t is also a typedef

int	main(void)
{
	cacahuete	a; // will transform it to int
	// if I put typedef here it wil only affect what's in this function
	a = 10;
	return (0);
}




int	x[10]
int	y[10]
//OR
int	point[20]
//OR

struct	s_point
{
	int	x;
	int	y;
};

int	main(void)
{
	struct s_point	a;
	struct s_point	b;
	
	a.x = 10;
	a.y = 42;
	b = a;
	return (10);
}
//OR

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

int	main(void)
{
	t_point	a;
	t_point	b;
	
	a.x = 10;
	a.y = 42;
	b = a;
	return (10);
}

//to access pointers in struck
int	main(void)
{
	t_point	a;
	t_point	b;
	t_point	*ptr;
	
	a.x = 10;
	a.y = 42;
	b = a;
	ptr = &a;
	(*ptr).x = 10;
	ptr->x = 10; //or like this
	return (10);
}





enum	e_list
{
	val1, // I could also add val1 = 4, like this it will start counting from 4, so val2 is 5, etc
	val2, // if I add val2 = 7, val3 will be 8
	val3
};

int	main(void)
{
	enum e_list	a;
	
	a = val3;
	return (a);
}





#include "tools.h"

struct  s_test //struct adds elements one after another
{
	int		;
	char	c;
	float	f;
	char	tab[4];
};

union	u_test
{
	int		i;
	char	c;
	float	f;
	char	tab[4];
};

int	main(void)
{
	union	u_test	a;
	
	a.i = 424242;
	ft_putnbr(10);
	return (0);
}
//it will be represented in our [4] tabs as
50
121
6
0
50+121*256+6*256 = 424242
