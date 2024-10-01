/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:01:44 by oudina            #+#    #+#             */
/*   Updated: 2024/09/24 14:19:51 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
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
}
