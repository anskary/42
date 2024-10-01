/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:04:44 by oudina            #+#    #+#             */
/*   Updated: 2024/09/23 20:06:52 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i]
		&& n > 1)
	{
		n--;
		i++;
	}
	if ((unsigned char)s1[i] != (unsigned char)s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
