/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:14:15 by dshults           #+#    #+#             */
/*   Updated: 2017/07/23 19:14:17 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *tab1, char *tab2)
{
	int		i;

	i = 0;
	while (tab1[i] == tab2[i] && tab1[i] != '\0' && tab2[i] != '\0')
		i++;
	if (tab1[i] == '\0' && tab2[i] == '\0')
		return (0);
	else
		return (tab1[i] - tab2[i]);
}

void		ft_swap(char **tab1, char **tab2)
{
	char	*tmp;

	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
}

void		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (tab[size])
		size++;
	while (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
