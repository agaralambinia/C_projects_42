char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	len = i;
	while ((src[i - len] != '\0') && ((i - len) < nb))
	{
		dest[i] = src[i - len];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char tchar1[65] = "aaaa";
	char char1[65] = "aaaa";
	char char2[4] = "bvv";
	printf("%s \n", strncat(tchar1, char2, 1));
	printf("%s \n", ft_strncat(char1, char2, 1));
}
*/