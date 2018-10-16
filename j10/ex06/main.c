/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:52:59 by dshults           #+#    #+#             */
/*   Updated: 2017/07/22 12:53:01 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int ac, char **av)
{
	int	check;

	check = ft_check(ac, av);
	if (check == 42 || check == 2)
		ft_all_good(av);
	else if (check == 0)
		return (0);
	else
		ft_putnbr(0);
	return (0);
}
