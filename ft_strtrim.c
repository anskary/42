
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     j;
    int     end;
    char    *res;

    end = ft_strlen(s1) - 1;
    while (s1[end] && ft_strchr(set,s1[end]))
        end--;
    i = 0;
    while (s1[end] && ft_strchr(set,s1[end]))
        i++;
    res = (char*)malloc(sizeof(char)*(end-i));
    if (!res)
        return (NULL);
    j = 0;
    while ((i+j)<=end)
    {
        res[j] = s1[i+j];
        j++;
    }
    return (res);
}