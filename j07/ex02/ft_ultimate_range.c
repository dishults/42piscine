/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:27:39 by dshults           #+#    #+#             */
/*   Updated: 2017/07/17 16:27:42 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(array = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
		array[i++] = min++;
	*range = array;
	return (i);
}
