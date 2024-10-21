/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:41:20 by oudina            #+#    #+#             */
/*   Updated: 2024/10/20 17:15:42 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_aux;
	unsigned char	c_aux;
	size_t			i;

	c_aux = (unsigned char)c;
	s_aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_aux[i] == c_aux)
			return ((void *)&s_aux[i]);
		i++;
	}
	return (NULL);
}
