char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if ((31 < str[i - 1] && str[i - 1] < 48)
				|| (57 < str[i - 1] && str[i - 1] < 65)
				|| (90 < str[i - 1] && str[i - 1] < 97)
				|| (122 < str[i - 1] && str[i - 1] < 127))
				str[i] = str[i] - 32;
		}
		else if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
	i++;
	}
	return (str);
}