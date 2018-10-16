/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:54:00 by dshults           #+#    #+#             */
/*   Updated: 2017/07/21 12:54:02 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = 0;
	if (!(array = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
