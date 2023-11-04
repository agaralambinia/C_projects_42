#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int		i;
	char	l;

	i = 0;
	while (str[i] != '\0')
	{
		l = str[i];
		write(1, &l, 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(50);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = -1 * nb;
		ft_putchar(45);
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}