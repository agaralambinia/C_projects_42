#include "libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    size_t  i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_memset(NULL));
}