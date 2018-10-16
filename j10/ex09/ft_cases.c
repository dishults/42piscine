/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:17:17 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 11:17:19 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int			ft_only_av1(char **av, void (*f)(int))
{
	t_value	v[100];

	if (av[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (av[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else if (av[2][0] == '*')
	{
		ft_putnbr(0);
		return (0);
	}
	v->value1 = ft_atoi(av[1]);
	f(v->value1);
	return (0);
}

int			ft_only_av2(char **av, void (*f)(int))
{
	t_value	v[100];

	if (av[2][0] == '/' || av[2][0] == '%' || av[2][0] == '*')
	{
		ft_putnbr(0);
		return (0);
	}
	else if (av[2][0] == '-')
	{
		f(v->value2 = ft_atoi(av[3]) * -1);
		return (0);
	}
	v->value2 = ft_atoi(av[3]);
	f(v->value2);
	return (0);
}

int			ft_all_good(char **av)
{
	int		res;
	t_value	v[100];

	v->value1 = ft_atoi(av[1]);
	v->value2 = ft_atoi(av[3]);
	res = ft_operator(v->value1, av[2], v->value2);
	if (res == 0)
		return (0);
	else
		ft_putnbr(res);
	return (1);
}
