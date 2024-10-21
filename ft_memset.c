/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:14:39 by oudina            #+#    #+#             */
/*   Updated: 2024/10/18 08:15:11 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;
	while (i < n)
	{
		res[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
