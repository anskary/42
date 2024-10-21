/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:12:12 by oudina            #+#    #+#             */
/*   Updated: 2024/10/18 21:01:48 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					c;
	int					signo;
	int					result;

	c = 0;
	result = 0;
	signo = 1;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\r'
		|| str[c] == '\t' || str[c] == '\v' || str[c] == '\f')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			signo = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = result * 10 + (str[c] - '0');
		c++;
	}
	return (signo * result);
}
