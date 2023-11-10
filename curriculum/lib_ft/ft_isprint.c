int	ft_isprint(int str)
{
	if (32 <= str && str <= 126)
		return (0);
	return (1);
}