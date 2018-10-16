/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:43:21 by dshults           #+#    #+#             */
/*   Updated: 2017/07/15 19:43:24 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check(char *base)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		n = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[n])
		{
			if (base[i] == base[n])
				return (0);
			n++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;
	int	res[1000];
	int	i;

	i = 0;
	length = 0;
	if (check(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[length])
			length++;
		while (nbr)
		{
			res[i] = nbr % length;
			nbr = nbr / length;
			i++;
		}
		i--;
		while (i >= 0)
			ft_putchar(base[res[i--]]);
	}
}
