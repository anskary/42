/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 03:36:05 by oudina            #+#    #+#             */
/*   Updated: 2024/09/27 11:44:12 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*res;

	len1 = (int)ft_strlen(s1);
	len2 = (int)ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len1 + len2));
	ft_bzero(res, (size_t)(len1 + len2));
	i = 0;
	while (res[i])
	{
		if (i < len1)
			res[i] = s1[i];
		else
			res[i] = s2[len1 + i];
		i++;
	}
	return (res);
}
