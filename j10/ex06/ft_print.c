/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 15:32:42 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 15:32:44 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int nb)
{
	unsigned int	tmp;
	unsigned int	length;

	length = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	tmp = nb;
	while ((tmp /= 10) > 0)
	{
		length *= 10;
	}
	tmp = nb;
	while (length)
	{
		ft_putchar((char)((tmp / length)) + 48);
		tmp %= length;
		length /= 10;
	}
	ft_putchar('\n');
}

void				ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
