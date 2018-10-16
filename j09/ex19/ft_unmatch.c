/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:17:25 by dshults           #+#    #+#             */
/*   Updated: 2017/07/14 15:16:12 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int	n;
	int pair;

	i = 0;
	while (i < length)
	{
		n = 0;
		pair = 0;
		while (n < length)
		{
			if (tab[n] == tab[i])
				pair++;
			n++;
		}
		if (pair % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}
