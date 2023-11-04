#include "ft.h"

void	calculate(int a, int b, int op)
{
	void	(*functions[5])(int, int);

	functions[0] = &summator;
	functions[1] = &diffirator;
	functions[2] = &multiplator;
	functions[3] = &dividor;
	functions[4] = &rester;
	if (op == 43)
		functions[0](a, b);
	else if (op == 45)
		functions[1](a, b);
	else if (op == 42)
		functions[2](a, b);
	else if (op == 47)
		functions[3](a, b);
	else if (op == 37)
		functions[4](a, b);
}

int	op_check(char *s)
{
	if (ft_strlen(s) != 1)
		return (1);
	if ((s[0] == 43) || (s[0] == 42) || (s[0] == 47)
		|| (s[0] == 45) || (s[0] == 37))
		return (s[0]);
	return (1);
}

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