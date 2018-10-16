/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:54:35 by dshults           #+#    #+#             */
/*   Updated: 2017/07/13 18:54:26 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		end_hour;
	char	*ampm;
	char	*ampm1;

	if (hour >= 0 && hour < 24)
	{
		end_hour = hour + 1;
		if (hour >= 0 && hour <= 11)
			ampm = "A.M.";
		else if (hour >= 12 && hour <= 23)
			ampm = "P.M.";
		if (hour > 12 && hour <= 23)
			hour -= 12;
		if (end_hour == 24)
			end_hour = 0;
		if (end_hour >= 0 && end_hour <= 11)
			ampm1 = "A.M.";
		else if (end_hour >= 12 && end_hour <= 23)
			ampm1 = "P.M.";
		if (end_hour > 12 && end_hour <= 23)
			end_hour -= 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s", hour, ampm);
		printf(" AND %d.00 %s", end_hour, ampm1);
	}
}
