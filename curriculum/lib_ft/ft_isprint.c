int	ft_isprint(char str)
{
	if (32 <= str && str <= 126)
		return (0);
	return (1);
}