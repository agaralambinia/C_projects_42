#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
}