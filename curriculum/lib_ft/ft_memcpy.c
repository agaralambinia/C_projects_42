#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t          i;
    unsigned char   *ndst;
    unsigned char   *nsrc;

    i = 0;
    if (!src && !dst) 
        return (dst);
    ndst = (unsigned char *)dst;
    nsrc = (unsigned char *)src;
    while (i < n)
    {
        ndst[i] = nsrc[i];
        i++;
    }
    return (dst);
}
