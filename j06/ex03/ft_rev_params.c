/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 16:23:27 by dshults           #+#    #+#             */
/*   Updated: 2017/07/16 16:23:28 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argc-- > 1)
	{
		i = 0;
		while (argv[argc][i])
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
