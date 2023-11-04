int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 1)
		return (nb);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("0^0 = %d \n", ft_recursive_power(0, 0));
	printf("0^-2 = %d \n", ft_recursive_power(0, -2));
	printf("0^2 = %d \n", ft_recursive_power(0, 2));
	printf("1^0 = %d \n", ft_recursive_power(1, 0));
	printf("1^5 = %d \n", ft_recursive_power(1, 5));
	printf("1^-5 = %d \n", ft_recursive_power(1, -5));
	printf("2^0 = %d \n", ft_recursive_power(2, 0));
	printf("2^1 = %d \n", ft_recursive_power(2, 1));
	printf("2^2 = %d \n", ft_recursive_power(2, 2));
	printf("2^5 = %d \n", ft_recursive_power(2, 5));
	printf("2^-4 = %d \n", ft_recursive_power(2,-4));
	printf("-2^0 = %d \n", ft_recursive_power(-2, 0));
	printf("-2^1 = %d \n", ft_recursive_power(-2, 1));
	printf("-2^2 = %d \n", ft_recursive_power(-2, 2));
	printf("-2^5 = %d \n", ft_recursive_power(-2, 5));
	printf("-2^-4 = %d \n", ft_recursive_power(-2,-4));
}
*/