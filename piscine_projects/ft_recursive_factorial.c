int	ft_recursive_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(-44));
}
*/