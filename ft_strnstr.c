/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:32:07 by oudina            #+#    #+#             */
/*   Updated: 2024/10/20 19:32:41 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	l = 0;
	if (*little == '\0')
		return ((char *)big);
	while (b < len && big[b] != '\0')
	{
		l = 0;
		while (b + l < len && big[b + l] == little[l] && little[l] != '\0')
			l++;
		if (little[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}
