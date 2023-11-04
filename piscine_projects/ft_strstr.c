char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == '\0')
			return (&str[i - j]);
		else if (str[i] == to_find[j])
			j++;
		else if (str[i] != to_find[j])
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char char1[50] = "dfghjvv";
	char char2[50] = "a";
	printf("%s \n", strstr(char1, char2));
	printf("%s \n", ft_strstr(char1, char2));
}
*/