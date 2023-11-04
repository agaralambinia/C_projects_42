#include "ft.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	op;

	a = 0;
	b = 0;
	op = 0;
	if (argc != 4)
		return (0);
	op = op_check(argv[2]);
	if (op == 1)
		ft_putstr("0\n");
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	calculate(a, b, op);
	return (0);
}