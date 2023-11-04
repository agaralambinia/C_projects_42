void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	position;

	i = 0;
	j = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j <= size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
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