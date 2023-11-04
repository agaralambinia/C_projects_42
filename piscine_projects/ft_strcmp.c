int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}	
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char char1[] = "aadfghj";
	char char2[] = "aavb";
	
	printf("%d\n", strcmp(char1, char2));
	printf("%d\n", ft_strcmp(char1, char2));
}
*/