NAME = test

GCC = gcc -Wall -Wextra -Werror

FILES = $(wildcard *.c)

all: $(NAME)

$(NAME):
	$(GCC) $(FILES) -o $(NAME)

clean:
	/bin/rm -f test

re:	clean all
