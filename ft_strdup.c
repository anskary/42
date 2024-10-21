/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 02:21:45 by oudina            #+#    #+#             */
/*   Updated: 2024/10/18 21:22:00 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	i = ft_strlen(s) + 1;
	res = malloc(i * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s, i);
	return (res);
}
