/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:48:33 by oudina            #+#    #+#             */
/*   Updated: 2024/10/20 22:25:47 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_split_cnt(char const *s, char c);
static char	**ft_split_in(char const *s, char c, char **res);
static void	ft_split_free(char **dst, int d);

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * (ft_split_cnt(s, c) + 1));
	if (!s || !res || !ft_split_in(s, c, res))
		return (NULL);
	return (res);
}

static char	**ft_split_in(char const *s, char c, char **res)
{
	int	end;
	int	start;
	int	index;

	end = 0;
	start = 0;
	index = 0;
	while (s[end])
	{
		if (s[end] == c)
			start = ++end;
		else
		{
			while (s[end] && s[end] != c)
				end++;
			res[index] = ft_substr(s, start, end - start);
			if (!res[index])
			{
				ft_split_free(res, index);
				return (NULL);
			}
			index++;
		}
	}
	return (res[index] = NULL, res);
}

static int	ft_split_cnt(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	ft_split_free(char **res, int index)
{
	while (index >= 0)
		free(res[index--]);
	free(res);
}
