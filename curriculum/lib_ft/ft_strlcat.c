#include <stdlib.h>
char	*ft_strcat(char *dest, char *src, size_t l)
{
	int	i;
	int	len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	len = i;
	while (src[i - len] != '\0')
	{
		dest[i] = src[i - len];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char tchar2[65] = "aa";
	char char3[65] = "aa";
	char char4[4] = "aaaa";
	printf("%lu \n", strlcat(tchar2, char4, 2));
	printf("%s \n", ft_strcat(char3, char4, 1));
}
