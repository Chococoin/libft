/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:17:00 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/25 12:48:01 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	fill_chars(char *character, int n, int length)
{
	character[length] = '\0';
	while (length > 0)
	{
		character[--length] = (n % 10) + '0';
		n /= 10;
	}
}

static int	get_digit(int number, int position)
{
	int	divisor;
	int	i;

	divisor = 1;
	i = 0;
	while (i < position)
	{
		divisor *= 10;
		i++;
	}
	return ((number / divisor) % 10);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*character;
	int		i;
	int		sign;

	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	n *= sign;
	length = get_num_length(n);
	if (sign == -1)
		length++;
	character = (char *)malloc(sizeof(char) * (length + 1));
	character[length] = '\0';
	if (!character)
		return (NULL);
	if (sign == -1)
		character[0] = '-';
	fill_chars(character + (sign == -1), n, length - (sign == -1));
	return (character);
}
