int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("0^0 = %d \n", ft_iterative_power(0, 0));
	printf("0^-2 = %d \n", ft_iterative_power(0, -2));
	printf("0^2 = %d \n", ft_iterative_power(0, 2));
	printf("1^0 = %d \n", ft_iterative_power(1, 0));
	printf("1^5 = %d \n", ft_iterative_power(1, 5));
	printf("1^-5 = %d \n", ft_iterative_power(1, -5));
	printf("2^0 = %d \n", ft_iterative_power(2, 0));
	printf("2^1 = %d \n", ft_iterative_power(2, 1));
	printf("2^2 = %d \n", ft_iterative_power(2, 2));
	printf("2^5 = %d \n", ft_iterative_power(2, 5));
	printf("2^-4 = %d \n", ft_iterative_power(2,-4));
	printf("-2^0 = %d \n", ft_iterative_power(-2, 0));
	printf("-2^1 = %d \n", ft_iterative_power(-2, 1));
	printf("-2^2 = %d \n", ft_iterative_power(-2, 2));
	printf("-2^5 = %d \n", ft_iterative_power(-2, 5));
	printf("-2^-4 = %d \n", ft_iterative_power(-2,-4));
}
*/