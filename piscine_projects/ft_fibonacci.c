int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>
int main()
{
	printf("0 fib = %d \n", ft_fibonacci(0));
	printf("1 fib = %d \n", ft_fibonacci(1));
	printf("2 fib = %d \n", ft_fibonacci(2));
	printf("3 fib = %d \n", ft_fibonacci(3));
	printf("4 fib = %d \n", ft_fibonacci(4));
	printf("5 fib = %d \n", ft_fibonacci(5));
	printf("6 fib = %d \n", ft_fibonacci(6));
	printf("7 fib = %d \n", ft_fibonacci(7));
	printf("8 fib = %d \n", ft_fibonacci(8));
	printf("-1 fib = %d \n", ft_fibonacci(-1));
	printf("-2 fib = %d \n", ft_fibonacci(-2));
}