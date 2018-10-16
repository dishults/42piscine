/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:18:53 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 11:18:55 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>

typedef struct		s_value
{
	long			value1;
	long			value2;
}					t_value;

int					ft_check(int ac, char **av);
long				ft_atoi(char *str);
int					ft_only_av1(char **av, void(*f)(long));
int					ft_only_av2(char **av, void(*f)(long));
int					ft_all_good(char **av);
int					ft_operator(long v1, long v2, char **av, void(*f)(long));
void				ft_putnbr(long nb);
void				ft_putstr(char *str);

#endif
