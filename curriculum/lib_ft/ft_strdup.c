#include "libft.h"

char	*ft_strdup(const char *src)
{
	int         i;
	char  *p;

    if (!src)
        return (0);
	p = (char *) malloc(ft_strlen(src) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}