#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	int	i;
    int j;
	int	src_len;
    int dst_len;
    int left;

	i = 0;
    dst_len = 0;
    left = l;
	while (src[i] != '\0')
		i++;
	src_len = i;
	while ((dst[dst_len] != '\0') && (left-- != 0))
        dst_len++;
    left = l - dst_len;
    if (left == 0)
        return ((size_t)(l + src_len));
    i = 0;
    j = dst_len;
    while ((src[i] != 0) && (left-- >1))
        dst[j++] = src[i++];
	dst[j] = '\0';
	return ((size_t)(src_len + dst_len));
}
