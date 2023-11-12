#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    size_t  i;
    size_t  j;

    if (!s)
        return (0);
    res = (char *)malloc(len + 1 * sizeof(char));
    if (!res)
        return (0);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
        res[j++] = s[i++];
    res[j] = '\0';
    return (res);
}