#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
	size_t	j;

    if (!haystack || !needle)
        return (0);

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
		    if (needle[i + j] == '\0' && needle[j] == '\0')
			    return ((char *)&haystack[i]);
            j++;
        }
		if (needle[j] == '\0')
            return ((char *)haystack + i);
		i++;
	}
	return (0);
}