#include "ft.h"

void	summator(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	diffirator(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	multiplator(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	dividor(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
}

void	rester(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
}