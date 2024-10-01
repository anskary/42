/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oudina <oudina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:02:09 by oudina            #+#    #+#             */
/*   Updated: 2024/09/27 11:41:08 by oudina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_split("hola que tal",' ')[1]);
	//printf("%d",(int)sizeof(char*));
	//printf("%s", ft_substr("hola mundo", 3, 3));
	//printf("%s", ft_strjoin("hola mundo", "adios mundo"));

	/*
	tryalfas('o');

	printf("%s", ft_substr("hola mundo", 3, 3));
	// printf("%s",substr("hola mundo",3,3));
	printf("%s", ft_substr("hola mundo", 7, 20));
	// printf("%s",substr("hola mundo",7,20));
	*/
	return (0);
}

void	tryalfas(int c)
{
	printf("\n\nisalpha:");
	if (ft_isalpha(c) != isalpha(c))
	{
		printf("ERROR: \n isalpha:%i \n ft_isalpha:%i", isalpha(c),
			ft_isalpha(c));
	}
	else
		printf("OK!");
	printf("\n\nisalnum:");
	if (ft_isalnum(c) != isalnum(c))
	{
		printf("ERROR: \n isalnum:%i \n ft_isalnum:%i", isalnum(c),
			ft_isalnum(c));
	}
	else
		printf("OK!");
	printf("\n\nisascii:");
	if (ft_isascii(c) != isascii(c))
	{
		printf("ERROR: \n isascii:%i \n ft_isascii:%i", isascii(c),
			ft_isascii(c));
	}
	else
		printf("OK!");
	printf("\n\nisdigit:");
	if (ft_isdigit(c) != isdigit(c))
	{
		printf("ERROR: \n isdigit:%i \n ft_isdigit:%i", isdigit(c),
			ft_isdigit(c));
	}
	else
		printf("OK!");
	printf("\n\nisprint:");
	if (ft_isprint(c) != isprint(c))
	{
		printf("ERROR: \n isprint:%i \n ft_isprint:%i", isprint(c),
			ft_isprint(c));
	}
	else
		printf("OK!");
	printf("\n\ntolower:");
	if (ft_tolower(c) != tolower(c))
	{
		printf("ERROR: \n tolower:%i \n ft_tolower:%i", tolower(c),
			ft_tolower(c));
	}
	else
		printf("OK!");
	printf("\n\ntoupper:");
	if (ft_toupper(c) != toupper(c))
	{
		printf("ERROR: \n toupper:%i \n ft_toupper:%i", toupper(c),
			ft_toupper(c));
	}
	else
		printf("OK!");
}
