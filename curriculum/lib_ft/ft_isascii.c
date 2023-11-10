int	ft_isascii(int str)
{
	if (0 <= str && str <= 127)
		return (1);
	return (0);
}