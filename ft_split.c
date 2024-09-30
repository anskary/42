
#include "libft.h"
#include <stdio.h>


char	**ft_split(char const *s, char c)
{
	char **res;
	char *aux;
	int wrdcnt;
	int i;

    printf("1");

	aux = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!aux)
		return (NULL);
	i = 0;
    ft_bzero(aux, ft_strlen(s));

	while (s[i])
	{
		if (s[i] == c)
		{
			aux[i] = '\0';
			if (aux[i + 1] != '\0')
				wrdcnt++;
		}
		else
			aux[i] = s[i];
		i++;
	}


	res = (char **)malloc(sizeof(char *) * wrdcnt);
	if (!res)
		return (NULL);
	i = 0;


	while (wrdcnt > i)
	{
		if (*aux != '\0' && *(aux - 1) == '\0')
			res[i] = aux;
		if (*aux == '\0' && *(aux + 1) != '\0')
			i++;
		aux++;
	}


	return (res);
}
