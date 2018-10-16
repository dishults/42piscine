/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:21:05 by dshults           #+#    #+#             */
/*   Updated: 2017/07/14 16:24:40 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_compact(char **tab, int length)
{
	int	i;
	int	y;

	i = 0;
	while (tab[i])
	{
		y = 0;
		while (tab[i][y])
		{
			if (tab[i][y] == '0')
				length -= 1;
			y++;
		}
		i++;
	}
	return (length);
}
