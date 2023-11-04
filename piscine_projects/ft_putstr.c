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