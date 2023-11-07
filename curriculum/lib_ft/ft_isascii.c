int	ft_isascii(char str)
{
	if (0 <= str && str <= 127)
		return (1);
	return (0);
}