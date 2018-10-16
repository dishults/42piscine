/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 10:23:38 by dshults           #+#    #+#             */
/*   Updated: 2017/07/10 10:52:53 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		first;
	int		last;

	first = 0;
	last = first;
	while (str[last])
		last++;
	last--;
	while (first < last)
	{
		tmp = str[last];
		str[last] = str[first];
		str[first] = tmp;
		first++;
		last--;
	}
	return (str);
}
