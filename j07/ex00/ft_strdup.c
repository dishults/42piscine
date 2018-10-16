/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 19:26:13 by dshults           #+#    #+#             */
/*   Updated: 2017/07/16 19:26:15 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*copy;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (!(copy = (char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	else
	{
		while (i < length)
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
