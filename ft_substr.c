/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 05:25:08 by oudina            #+#    #+#             */
/*   Updated: 2024/09/27 09:35:48 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	ressize;
	size_t	slen;
	size_t	i;

    start--;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= len + start)
		ressize = slen - start;
	else
		ressize = len;
	res = (char *)malloc(sizeof(char) * ressize);
	if (!res)
		return (NULL);
	i = 0;
	while (i < ressize)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
