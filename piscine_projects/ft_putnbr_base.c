#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int clause_check(char *base)
{
	int	i;
	int	j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(base);
	while (i <=  len - 2)
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i+1;
		while (j <= len - 1)
			{
				if ((base[i] == base[j]) || (base[j] == 43) || (base[j] == 45))
					return (0);
				j++;
			}
		i++;
	}
	return (1);
}

void translate(unsigned int nbr, unsigned int len, char *base)
{
	if (nbr > len)
	{
		translate(nbr / len, len, base);
		translate(nbr % len, len, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
	ft_putchar('\0');
}

void ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;
	unsigned int n;

	len = ft_strlen(base);
	if ((len != 1) && (clause_check(base) != 0))
	{
		if (nbr < 0)
		{
			ft_putchar(45);
			n = -1 * nbr;
		}
		else
			n = nbr;
		translate(n, len, base);
	}
}

int main()
{
	ft_putnbr_base(-2, "0123456789");
}