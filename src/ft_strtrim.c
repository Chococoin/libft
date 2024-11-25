/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:50:07 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/11/25 17:38:15 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && ft_is_in_set(s1[i], set))
		i++;
	return (i);
}

static int	ft_get_end(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (i >= 0 && ft_is_in_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		length;
	char	*result;
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		length++;
		i++;
	}
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	result = (char *)malloc(sizeof(char) * end - start + 1);
	result[length + 1] = '\0';
	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	return (result);
}
