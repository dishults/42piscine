/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:25:26 by dshults           #+#    #+#             */
/*   Updated: 2017/07/17 12:25:28 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(array = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	else
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		array[i] = '\0';
		return (array);
	}
}
