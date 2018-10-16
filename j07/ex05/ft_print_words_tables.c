/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:06:46 by dshults           #+#    #+#             */
/*   Updated: 2017/07/18 18:06:52 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int n;

	i = 0;
	while (tab[i])
	{
		n = 0;
		while (tab[i][n])
		{
			ft_putchar(tab[i][n]);
			n++;
		}
		ft_putchar('\n');
		tab++;
	}
}
