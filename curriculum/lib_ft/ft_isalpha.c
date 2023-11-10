int	ft_isalpha(int str)
{
	if ((97 <= str && str <= 122) || (65 <= str && str <= 90))
		return (1);
	return (0);
}