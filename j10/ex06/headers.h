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
	int			value1;
	int			value2;
}					t_value;

int					ft_check(int ac, char **av);
int					ft_atoi(char *str);
int					ft_only_av1(char **av, void(*f)(int));
int					ft_only_av2(char **av, void(*f)(int));
int					ft_all_good(char **av);
int					ft_operator(int v1, int v2, char **av, void(*f)(int));
void				ft_putnbr(int nb);
void				ft_putstr(char *str);

#endif
