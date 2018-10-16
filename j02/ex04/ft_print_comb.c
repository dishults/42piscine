/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:26:32 by dshults           #+#    #+#             */
/*   Updated: 2017/07/09 12:50:22 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int digit[3];

	digit[0] = 0;
	while (digit[0] <= 9)
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= 9)
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= 9)
			{
				ft_putchar(48 + digit[0]);
				ft_putchar(48 + digit[1]);
				ft_putchar(48 + digit[2]);
				if (!(digit[0] == 7 && digit[1] == 8 && digit[2] == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
