int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2)
	{
		if (i >= 46341)
			return (0);
		else if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (nb / 2);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sq;

	i = 2;
	sq = ft_sqrt(nb);
	while (i <= sq)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*