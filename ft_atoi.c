/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:12:12 by oudina            #+#    #+#             */
/*   Updated: 2024/09/23 21:19:18 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *nptr)
{
	long	res;
	int		i;
	int		isneg;

	i = 0;
	res = 1;
	isneg = 1;
	if (!nptr)
		return (0);
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		isneg = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] && nptr[i] <= '9' && nptr[i] >= '0')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(res * isneg));
}
