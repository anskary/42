/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:01:44 by oudina            #+#    #+#             */
/*   Updated: 2024/10/21 01:25:45 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (d < s)
		while (len--)
			d[i] = s[i++];
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (*(char *)dest != '\0' || *(char *)src != '\0')
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (i < sizeof(src) && i < sizeof(dest))
			*((int *)dest + i) = *((int *)src + i);
		else
			return (dest);
		i++;
	}
	return (NULL);
}*/
