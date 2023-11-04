#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundred;
	char	decimal;
	char	solo;

	hundred = 48;
	while (hundred <= 55)
	{
		decimal = hundred + 1;
		while (decimal <= 56)
		{
			solo = decimal + 1;
			while (solo <= 57)
			{
				if (hundred != 48 || decimal != 49 || solo != 50)
					write(1, ", ", 2);
				write(1, &hundred, 1);
				write(1, &decimal, 1);
				write(1, &solo, 1);
				solo++;
			}
		decimal++;
		}
	hundred++;
	}
}