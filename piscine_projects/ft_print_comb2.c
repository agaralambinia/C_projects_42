#include <unistd.h>

void	print_decimal(int d)
{
	char	c;

	if (d <= 9)
	{
		c = 48;
		write(1, &c, 1);
		c = d + 48;
		write(1, &c, 1);
	}
	else
	{
		c = d / 10 + 48;
		write(1, &c, 1);
		c = (d % 10) + 48;
		write(1, &c, 1);
	}
}

void	print_sequence(int a, int b)
{
	print_decimal(a);
	write(1, " ", 1);
	print_decimal(b);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_sequence(a, b);
			b++;
		}
		a++;
	}
}