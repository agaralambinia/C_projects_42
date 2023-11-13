#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int             len;
    unsigned int    i;
    char            *res;

    if (!(len = ft_strlen(s)))
        return (0);
    if (!(res = (char *) malloc((len + 1) * sizeof(char))))
		return (0);
    i = 0;
    while (s[i] != '\0')
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}
