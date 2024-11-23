/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:01:20 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/23 15:13:15 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		integer;
	int		i;
	char	sign;

	i = 0;
	sign = 1;
	integer = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] == '-' )
			sign = -1;
		if (nptr[i] == '+' )
			sign = 1;
		if (nptr[i] >= '0' && nptr[i] <= '9')
			integer = (integer * 10) + (nptr[i] - '0');
		i++;
	}
	return ((char)(integer * sign));
}
