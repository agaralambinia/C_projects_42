int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (nb / 2);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sq;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	sq = ft_sqrt(nb);
	while (i <= sq)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("0 is prime = %d \n", ft_is_prime(0));
	printf("-20 is prime = %d \n", ft_is_prime(-20));
	printf("1 is prime = %d \n", ft_is_prime(1));
	printf("2 is prime = %d \n", ft_is_prime(2));
	printf("3 is prime = %d \n", ft_is_prime(3));
	printf("20 is prime = %d \n", ft_is_prime(20));
	printf("29 is prime = %d \n", ft_is_prime(29));
	printf("7369 is prime = %d \n", ft_is_prime(7369));
	printf("7370 is prime = %d \n", ft_is_prime(7370));
	printf("2147483647 is prime = %d \n", ft_is_prime(2147483647));
}
*/