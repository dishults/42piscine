# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshults <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 15:12:50 by dshults           #+#    #+#              #
#    Updated: 2017/07/21 15:13:04 by dshults          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

GCC = gcc -Wall -Wextra -Werror

FILES = ft_atoi.c ft_cases.c ft_check.c ft_operator.c ft_print.c main.c

all: $(NAME)

$(NAME):
	$(GCC) $(FILES) -I./ -o $(NAME)

clean:
	/bin/rm -f do-op

re: clean all
