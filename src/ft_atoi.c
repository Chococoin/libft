/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:58:37 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/25 07:39:10 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int buffer;
	int number_seen;
	int not_double_sign;

	sign = 1;
	buffer = 0;
	i = 0;
	number_seen = 0;
	not_double_sign = 0;

	while (nptr[i] != '\0')
	{
		if (nptr[i] == '-')
		{
			sign = -1;
			not_double_sign++;
			if (not_double_sign > 1) return (0);
		}
		if (nptr[i] == '+')
		{
			sign = 1;
			not_double_sign++;
			if (not_double_sign > 1) return (0);
		}
		if (nptr[i] >= 33 && nptr[i] <= 42 || nptr[i] == 44 || nptr[i] == 46 || nptr[i] == 47 || nptr[i] >= 58 && nptr[i] <= 126)
		{
			if (!number_seen)
				return (0);
		}
		if (nptr[i] >= '0' && nptr[i] <= '9')	
			buffer = buffer * 10 + (nptr[i] - '0');
			number_seen++;
			if (number_seen > 1) return (0);
		i++;
	}
	
	return (buffer * sign);
}
