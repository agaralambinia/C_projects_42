#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
    char    *temp;

	conc = ft_calloc((ft_strlen(s1) + ft_strlen(s1) + 1), sizeof(char));
	if (!conc)
		return (NULL);
    temp = conc;
    if (s1)
    {
	    while (*s1 != '\0')
            *temp++ = *s1++;
    }
    if (s2)
    {
        while (*s2 != '\0')
            *temp++ = *s2++;
    }
	*temp = '\0';
	return (conc);
}