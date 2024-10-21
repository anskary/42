/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:18:39 by oudina            #+#    #+#             */
/*   Updated: 2024/10/21 01:21:35 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int i)
{
	int	cont;

	cont = 0;
	if (i <= 0)
	{
		cont = 1;
	}
	while (i != 0)
	{
		i /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	n_aux;

	n_aux = n;
	len = countdigits(n);
	res = (char *)(malloc(sizeof(char) * len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n_aux < 0)
	{
		res[0] = '-';
		n_aux = -n_aux;
	}
	else if (n_aux == 0)
		res[0] = '0';
	while (n_aux > 0)
	{
		res[--len] = (n_aux % 10) + '0';
		n_aux /= 10;
	}
	return (res);
}
