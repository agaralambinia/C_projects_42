int	isspace_check(char a)
{
	if ((a == ' ') || (a == '\n') || (a == '\t') || (a == '\v')
		|| (a == '\f') || (a == '\r'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	while (isspace_check(str[i]))
		i++;
	while (str[i] == 43 || str[i] == 45)
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
/*
#include <stdio.h>
int main()
{
	char ch[50] = "134588";
	printf("%d", ft_atoi(ch));
}
*/