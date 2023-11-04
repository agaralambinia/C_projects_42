char	*ft_strcat(char *dest, char *src)
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
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char tchar1[65] = "a";
	char char1[65] = "a";
	char char2[4] = "aaa";
	printf("%s \n", strcat(tchar1, char2));
	printf("%s \n", ft_strcat(char1, char2));
}
*/