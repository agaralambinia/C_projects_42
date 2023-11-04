#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int test(char *tab)
{
	if (tab[0] == 'a')
		return (1);
	return (0);
}
int main()
{
	char *a[] = {"anton","serega","", NULL};
	ft_any(a, &test);
	printf("%d\n", ft_any(a, &test));
}
*/