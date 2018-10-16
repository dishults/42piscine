/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:25:18 by dshults           #+#    #+#             */
/*   Updated: 2017/07/15 17:28:22 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	length;

	i = 0;
	n = 0;
	while (dest[i] && i < size)
		i++;
	length = i;
	while (src[n] && i < size - 1)
		dest[i++] = src[n++];
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}
