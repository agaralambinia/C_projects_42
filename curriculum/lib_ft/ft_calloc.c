#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    size_t  countsize;
    void    *dst;

    countsize = count * size;
    dst = malloc(countsize);
    if (!dst)
        return (0);
    ft_memset(dst, 0, countsize);
    return (dst);
}