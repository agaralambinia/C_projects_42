#include "libft.h"

void    *ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
    char    *ndst;
    char    *nsrc;
    size_t  i;

    i = 0;
    if (!src && !dst) 
        return (dst);
    ndst = (char *)dst;
    nsrc = (char *)src;
    if (dst > src)
    {
        while (n--)
            ndst[n] = nsrc[n];
    }
    else
    {
        while (i++ < n)
            ndst[i] = nsrc[i];
    }
    return (dst);
}
