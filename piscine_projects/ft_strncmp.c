int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
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
	char char1[] = "";
	char char2[] = "aaac";

	printf("%d\n", strncmp(char1, char2, 1));
	printf("%d\n", ft_strncmp(char1, char2, 1));
}
*/