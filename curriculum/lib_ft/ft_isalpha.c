int	ft_isalpha(char str)
{
	if ((97 <= str && str <= 122) || (65 <= str && str <= 90))
		return (1);
	else
		return (0);
	return (1);
}