/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:50:02 by dshults           #+#    #+#             */
/*   Updated: 2017/07/08 12:47:31 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_combn(void)
{
	char	digit[2];

	digit[1] = 1;
	while (!((digit[0] == 9) && (digit[1] == 10)))
	{
		ft_putchar(digit[0] + 48);
		ft_putchar(digit[1] + 48);
		if (!((digit[0] == 8) && (digit[1] == 9)))
			ft_putchar(',');
		if (!((digit[0] == 8) && (digit[1] == 9)))
			ft_putchar(' ');
		digit[1]++;
		if (digit[1] == 10)
		{
			digit[0]++;
			digit[1] = digit[0] + 1;
		}
	}
}
