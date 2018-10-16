/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:17:41 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 11:17:42 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "ft_opp.h"

int			ft_usage(int v1, int v2)
{
	int		i;

	i = 0;
	v1 = 0;
	v2 = 0;
	ft_putstr("error : only [ ");
	while (i < (int)(sizeof(g_opptab) / sizeof(t_opp)))
	{
		if (g_opptab[i].ft_opp == &ft_usage)
			i++;
		else
		{
			ft_putstr(g_opptab[i].c);
			ft_putstr(" ");
			i++;
		}
	}
	ft_putstr("] are accepted.\n");
	return (0);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

int			ft_operator(int v1, char *c, int v2)
{
	int		i;

	i = 0;
	while (i < (int)(sizeof(g_opptab) / sizeof(t_opp)))
	{
		if (ft_strcmp(g_opptab[i].c, c) == 0)
		{
			return (g_opptab[i].ft_opp(v1, v2));
		}
		i++;
	}
	return (ft_usage(v1, v2));
}
