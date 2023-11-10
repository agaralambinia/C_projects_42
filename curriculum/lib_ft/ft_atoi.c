int	isspace_check(const char a)
{
	if ((a == ' ') || (a == '\n') || (a == '\t') || (a == '\v')
		|| (a == '\f') || (a == '\r'))
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	if (!str)
		return 0;
	while (isspace_check(str[i]))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = (-1) * sign;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		res = res * 10 - 48 + str[i];
		i++;
	}
	return (res * sign);
}