/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:02:00 by oudina            #+#    #+#             */
/*   Updated: 2024/10/20 19:08:53 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;
	size_t			i;

	s1_aux = (unsigned char *)s1;
	s2_aux = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		if (s1_aux[i] != s2_aux[i])
			return (s1_aux[i] - s2_aux[i]);
		i++;
	}
	return (0);
}
