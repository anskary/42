/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 05:25:08 by oudina            #+#    #+#             */
/*   Updated: 2024/10/20 19:36:09 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
		return ("");
	if (slen < (len + start))
		len = slen - start;
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

*/
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	ressize;
	size_t	slen;
	size_t	i;

	start = start;
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
	res[i] = '\0';
	return (res);
}
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*p;

	i = 0;
	str = (char *)s;
	if (!str || start > ft_strlen(str))
	{
		p = (char *) ft_calloc(1, sizeof(char));
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (len > (ft_strlen(str) - start))
		len = ft_strlen(str) - start;
	p = (char *) ft_calloc((len + 1), sizeof(char));
	if (p == 0)
		return (0);
	str += start;
	while (*str && (i < len))
		p[i++] = *str++;
	return (p);
}
