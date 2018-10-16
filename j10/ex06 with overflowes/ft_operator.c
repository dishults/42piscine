/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:17:41 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 11:17:42 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_sub(long v1, long v2, void (*f)(long))
{
	long	check;

	check = v1 - v2;
	if (check < -2147483648)
		return (0);
	else
		f(v1 - v2);
	return (0);
}

int	ft_mult(long v1, long v2, void (*f)(long))
{
	long	check;

	check = v1 * v2;
	if (check < -2147483648 || check > 2147483647)
		return (0);
	else
		f(v1 * v2);
	return (0);
}

int	ft_div(long v1, long v2, void (*f)(long))
{
	long	check;

	check = v1 / v2;
	if (check < -2147483648 || check > 2147483647)
		return (0);
	else
		f(v1 / v2);
	return (0);
}

int	ft_mod(long v1, long v2, void (*f)(long))
{
	long	check;

	check = v1 % v2;
	if (check < -2147483648 || check > 2147483647)
		return (0);
	else
		f(v1 % v2);
	return (0);
}

int	ft_operator(int v1, int v2, char **av, void (*f)(int))
{
	if (av[2][0] == '+')
		f(v1 + v2);
	else if (av[2][0] == '-')
		ft_sub(v1, v2, &ft_putnbr);
	else if (av[2][0] == '*')
		ft_mult(v1, v2, &ft_putnbr);
	else if (av[2][0] == '/')
		ft_div(v1, v2, &ft_putnbr);
	else if (av[2][0] == '%')
		ft_mod(v1, v2, &ft_putnbr);
	return (0);
}
