/*
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
*/
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*swap;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (tab[len] != NULL)
		len++;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	char *a[] = {"34567", "fghjk", "  ",NULL};
	int i = 0;
	ft_advanced_sort_string_tab(a, &ft_strcmp);
	while (a[i])
	{
		printf("%s ",a[i]);
		i++;
	}
}
*/