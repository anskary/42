/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:32:07 by oudina            #+#    #+#             */
/*   Updated: 2024/09/24 02:50:09 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	b;

	if (!big || *big == '\0')
		return (NULL);
	if (!little || *little == '\0')
		return ((char *)big);
	b = 0;
	while (big[b] != '\0' && len > b)
	{
		l = 0;
		while (little[l] == big[b + l])
		{
			l++;
			if (little[l] == '\0')
				return ((char *)big + b);
			if (big[b + l] == '\0')
				return (NULL);
		}
		b++;
	}
	return (NULL);
}
