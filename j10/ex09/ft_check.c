/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:17:28 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 11:17:30 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_check(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*'
	&& av[2][0] != '/' && av[2][0] != '%') || av[2][1] != '\0')
		ft_usage(0, 0);
	else if ((av[1][0] == '-' && av[1][1] >= '0' && av[1][1] <= '9')
	|| (av[3][0] == '-' && av[3][1] >= '0' && av[3][1] <= '9'))
		return (2);
	else if (av[1][0] < '0' || av[1][0] > '9')
		ft_only_av2(av, &ft_putnbr);
	else if (av[3][0] < '0' || av[3][0] > '9')
		ft_only_av1(av, &ft_putnbr);
	else if (av[2][0] == '/' && av[3][0] == '0')
		ft_putstr("Stop : division by zero\n");
	else if (av[2][0] == '%' && av[3][0] == '0')
		ft_putstr("Stop : modulo by zero\n");
	else
		return (42);
	return (0);
}
