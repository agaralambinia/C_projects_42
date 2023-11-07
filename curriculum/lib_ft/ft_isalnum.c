int	ft_isalnum(char str)
{
	if ((97 <= str && str <= 122) || (65 <= str && str <= 90) || (48 <= str && str <= 57))
		return (1);
	return (0);
}