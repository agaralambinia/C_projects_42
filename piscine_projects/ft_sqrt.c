int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2)
	{
		if (i >= 46341)
			return (0);
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("-100 root = %d \n", ft_sqrt(-100));
	printf("0 root = %d \n", ft_sqrt(0));
	printf("1 root = %d \n", ft_sqrt(1));
	printf("4 root = %d \n", ft_sqrt(4));
	printf("1787569 root = %d \n", ft_sqrt(1787569));
	printf("1787570 root = %d \n", ft_sqrt(1787570));
}
*/