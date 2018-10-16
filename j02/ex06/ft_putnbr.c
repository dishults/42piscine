/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:12:46 by dshults           #+#    #+#             */
/*   Updated: 2017/07/09 18:41:30 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
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
}
