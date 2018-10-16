/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:33:28 by dshults           #+#    #+#             */
/*   Updated: 2017/07/13 16:12:16 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_make_all_low(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_make_all_low(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				while ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
					i++;
			else
			{
				str[i] -= 32;
				i++;
			}
			while (str[i] >= 'a' && str[i] <= 'z')
				i++;
		}
		i++;
	}
	return (str);
}
