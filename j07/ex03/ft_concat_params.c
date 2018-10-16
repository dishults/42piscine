/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:29:22 by dshults           #+#    #+#             */
/*   Updated: 2017/07/17 16:29:25 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		aa;
	int		k;
	char	*copy;

	a = 1;
	aa = 0;
	k = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (**argv + 1))))
		return (0);
	else
	{
		while (a < argc)
		{
			aa = 0;
			while (argv[a][aa])
				copy[k++] = argv[a][aa++];
			if (a++ < argc - 1)
				copy[k++] = '\n';
		}
		copy[k] = '\0';
		return (copy);
	}
}
