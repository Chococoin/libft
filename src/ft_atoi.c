/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:58:37 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/23 18:25:53 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int buffer;

	sign = 1;
	buffer = 0;
	i = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] == '-')
			sign = -1;
		if (nptr[i] == '+')
			sign = 1;
		if (nptr[i] >= '0' && nptr[i] <= '9')
			buffer = buffer * 10 + (nptr[i] - '0');
		i++;
	}
	
	return (buffer * sign);
}
